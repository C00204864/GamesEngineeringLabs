#include "ConcreteCommands.h"
#include "Animation.h"

void JumpCommand::execute(Animation & animation)
{
	animation.jump();
}

void JumpCommand::undo()
{
	std::cout << "Undo Jump" << std::endl;
}

void CrouchCommand::execute(Animation & animation)
{
	animation.crouch();
}

void CrouchCommand::undo()
{
	std::cout << "Undo Crouch" << std::endl;
}

void MeleeCommand::execute(Animation & animation)
{
	animation.melee();
}

void MeleeCommand::undo()
{
	std::cout << "Undo Melee" << std::endl;
}