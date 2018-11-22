#include <iostream>

bool checkNumberRange(int argc, int startPoint, char * argv[])
{
	for (int i = startPoint; i < argc; ++i)
	{
		for (int j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				return false;
			}
		}
		int num = atoi(argv[i]);
		if (num < 1 || num > 46)
		{
			return false;
		}
	}
	return true;
}

bool checkRepetition(int argc, int startPoint, char * argv[])
{
	for (int i = startPoint; i < argc; ++i)
	{
		for (int j = i + 1; j < argc; ++j)
		{
			if (!strcmp(argv[i], argv[j]))
			{
				return false;
			}
		}
	}
	return true;
}


int main(int argc, char * argv[])
{
	if (argc == 7 && checkNumberRange(argc, 1, argv) && checkRepetition(argc, 1, argv))
	{
		std::cout << "Valid Numbers" << std::endl;
	}
	else
	{
		std::cout << "Invalid Numbers" << std::endl;
	}
	return 0;
}