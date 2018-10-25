#ifndef COMMAND_H
#define COMMAND_H

#include "Animation.h"

class Command
{
public:
	virtual ~Command();
	virtual void execute(Animation & animation) = 0;
	virtual void undo() = 0;

protected:
	Command();
};

#endif // !COMMAND_H
