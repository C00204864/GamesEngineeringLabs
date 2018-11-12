#include "System.h"

System::System() {}

System::~System() {}

void System::addEntity(Entity entity)
{
	m_entities.push_back(entity);
}

void System::removeEntity(int id)
{
	// Not implemented...
}

void System::update()
{
	for (auto entity : m_entities)
	{
		for (auto component : entity.getComponents())
		{
			updateComponent(component);
		}
	}
}

void System::updateComponent(Component * component) {}
