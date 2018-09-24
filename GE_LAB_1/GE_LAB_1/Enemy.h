#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	virtual void update() = 0;
};

#endif // !ENEMY_H
