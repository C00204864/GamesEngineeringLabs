#include "Jump.h"
#include "Animation.h"

Jump::Jump() {}

Jump::~Jump() {}

void Jump::crouch(Animation * animation)
{
	std::cout << "jump -> crouch" << std::endl;
	animation->setCurrentState(new Crouch());
	delete this;
}

void Jump::melee(Animation * animation)
{
	std::cout << "jump -> melee" << std::endl;
	animation->setCurrentState(new Melee());
	delete this;
}