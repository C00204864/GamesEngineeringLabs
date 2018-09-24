#include "Player.h"

Player::Player(DrawAPI * apiIn) : Actor()
{
	drawAPI = apiIn;
}

void Player::draw()
{
	std::cout << "Player Draw" << std::endl;
	drawAPI->draw();
}