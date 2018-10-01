#ifndef CONCRETECOMMANDS_H
#define CONCRETECOMMNADS_H

#include <iostream>
#include "Command.h"

class JumpCommand : public Command
{
	virtual void execute() override;
	virtual void undo() override;
};

class FireCommand : public Command
{
	virtual void execute() override;
	virtual void undo() override;
};

class CrouchCommand : public Command
{
	virtual void execute() override;
	virtual void undo() override;
};

class ShieldCommand : public Command
{
	virtual void execute() override;
	virtual void undo() override;
};

class MeleeCommand : public Command
{
	virtual void execute() override;
	virtual void undo() override;
};

#endif // !CONCRETECOMMANDS_H
