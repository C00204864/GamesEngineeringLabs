#ifndef MACRO_H
#define MACRO_H

#include <vector>
#include "Command.h"

class Macro : public Command
{
public:
	Macro();
	virtual ~Macro();
	virtual void add(Command * command);
	virtual void remove(Command * command);
	virtual void execute() override;
	virtual void undo() override;
private:
	std::vector<Command *> m_commands;
};

#endif // !MACRO_H
