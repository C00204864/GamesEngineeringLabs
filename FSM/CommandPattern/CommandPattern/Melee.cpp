#include "Melee.h"
#include "Animation.h"

Melee::Melee() {}

Melee::~Melee() {}

void Melee::jump(Animation * animation)
{
	std::cout << "melee -> jump" << std::endl;
	animation->setCurrentState(new Jump());
	delete this;
}

void Melee::crouch(Animation * animation)
{
	std::cout << "melee -> crouch" << std::endl;
	animation->setCurrentState(new Crouch());
	delete this;
}