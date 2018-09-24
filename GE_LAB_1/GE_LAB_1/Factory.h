#ifndef FACTORY_H
#define FACTORY_H

#include "EnemyEasy.h"
#include "EnemyHard.h"

class Factory
{
public:
	virtual Enemy * createEnemyEasy() = 0;
	virtual Enemy * createEnemyHard() = 0;
};

#endif // !FACTORY_H
