#include <thread>
#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable> 

std::mutex mx;
std::condition_variable cv;
std::queue<int> q;
bool finished = false;

void producer(int n)
{
	for (int i = 0; i < n; ++i)
	{
		{
			std::lock_guard<std::mutex> lk(mx);
			q.push(i);
			std::cout << "Pushing " << i << " into queue" << std::endl;
		}
	}
	{
		std::lock_guard<std::mutex> lk(mx);
		finished = true;
	}
}

void consumer()
{
	while (true)
	{
		std::unique_lock<std::mutex> lk(mx);
		while (!q.empty())
		{
			std::cout << "Consuming " << q.front() << std::endl;
			q.pop();
		}
		if (finished)
		{
			break;
		}
	}
}

int main()
{
	std::thread t1(producer, 1000);
	std::thread t2(consumer);
	t1.join();
	t2.join();
	std::cout << "Finished" << std::endl;
	std::system("pause");
}