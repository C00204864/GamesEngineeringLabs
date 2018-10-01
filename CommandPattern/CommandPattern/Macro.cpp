#include "Macro.h"

Macro::Macro() {}

Macro::~Macro() {}

void Macro::add(Command * command)
{
	m_commands.push_back(command);
}

void Macro::remove(Command * command)
{
	for (auto it = m_commands.begin(); it > m_commands.end(); ++it)
	{
		if (*it == command)
		{
			m_commands.erase(it);
		}
	}
}

void Macro::execute()
{
	for (auto it = m_commands.begin(); it < m_commands.end(); ++it)
	{
		(*it)->execute();
	}
}

void Macro::undo()
{
	for (auto it = m_commands.rbegin(); it != m_commands.rend(); ++it)
	{
		(*it)->undo();
	}
}