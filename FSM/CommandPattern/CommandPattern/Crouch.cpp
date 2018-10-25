#include "Crouch.h"
#include "Animation.h" // Resolve circular dependancy

Crouch::Crouch() {}

Crouch::~Crouch() {}

void Crouch::melee(Animation * animation)
{
	std::cout << "crouch -> melee" << std::endl;
	animation->setCurrentState(new Melee());
	delete this;
}

void Crouch::jump(Animation * animation)
{
	std::cout << "crouch -> jump" << std::endl;
	animation->setCurrentState(new Jump());
	delete this;
}