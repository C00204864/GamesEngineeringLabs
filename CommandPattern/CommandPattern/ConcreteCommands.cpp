#include "ConcreteCommands.h"

void JumpCommand::execute()
{
	std::cout << "Jump" << std::endl;
}

void JumpCommand::undo()
{
	std::cout << "Undo Jump" << std::endl;
}

void FireCommand::execute()
{
	std::cout << "Fire" << std::endl;
}

void FireCommand::undo()
{
	std::cout << "Undo Fire" << std::endl;
}

void CrouchCommand::execute()
{
	std::cout << "Crouch" << std::endl;
}

void CrouchCommand::undo()
{
	std::cout << "Undo Crouch" << std::endl;
}

void ShieldCommand::execute()
{
	std::cout << "Shield" << std::endl;
}

void ShieldCommand::undo()
{
	std::cout << "Undo Shield" << std::endl;
}

void MeleeCommand::execute()
{
	std::cout << "Melee" << std::endl;
}

void MeleeCommand::undo()
{
	std::cout << "Undo Melee" << std::endl;
}