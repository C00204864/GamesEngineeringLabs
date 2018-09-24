// Design Pattern Implementations

#include <vector>
#include "EnemyFactory.h"
#include "DrawImp.h"
#include "Player.h"
#include "GraphicProxy.h"

int main()
{
	// Abstract Factory
	std::vector<Enemy *> enemies;
	EnemyFactory enemyFactory;
	enemies.push_back(enemyFactory.createEnemyEasy());
	enemies.push_back(enemyFactory.createEnemyHard());
	for (Enemy * enemy : enemies)
	{
		enemy->update();
	}
	for (auto iterator = enemies.begin(); iterator != enemies.end(); ++iterator)
	{
		delete(*iterator);
	}

	//// Bridge Pattern
	//DrawAPI * api = new DrawImp();
	//Actor * actor = new Player(api);
	//actor->draw();

	//// Proxy
	//GraphicProxy gp;
	//gp.draw();

	std::system("pause");
	return 0;
}
