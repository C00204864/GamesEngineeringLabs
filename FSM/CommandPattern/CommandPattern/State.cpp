#include "State.h"
#include "Animation.h"

State::State() {}

void State::handleInput() {}

void State::update() {}

void State::jump(Animation * animation)
{
	std::cout << "Already In Jump State" << std::endl;
}

void State::crouch(Animation * animation)
{
	std::cout << "Already In Crouch State" << std::endl;
}

void State::melee(Animation * animation)
{
	std::cout << "Already In Melee State" << std::endl;
}