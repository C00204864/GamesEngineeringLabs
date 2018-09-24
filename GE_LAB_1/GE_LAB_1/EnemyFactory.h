#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include "Factory.h"

class EnemyFactory : Factory
{
public:
	Enemy * createEnemyEasy() override;
	Enemy * createEnemyHard() override;
};

#endif // !ENEMYFACTORY_H
