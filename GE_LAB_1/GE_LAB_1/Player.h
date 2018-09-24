#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Actor.h"
#include "DrawAPI.h"

class Player : public Actor
{
public:
	Player(DrawAPI * apiIn);
	void draw() override;
private:
	DrawAPI * drawAPI;
};

#endif // !PLAYER_H

