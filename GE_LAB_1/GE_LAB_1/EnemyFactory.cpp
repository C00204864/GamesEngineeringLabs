#include "EnemyFactory.h"

Enemy * EnemyFactory::createEnemyEasy()
{
	return new EnemyEasy;
}

Enemy * EnemyFactory::createEnemyHard()
{
	return new EnemyHard;
}