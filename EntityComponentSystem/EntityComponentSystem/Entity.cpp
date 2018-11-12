#include "Entity.h"

Entity::Entity() {}

Entity::~Entity() {}

void Entity::addComponent(Component * component)
{
	m_components.push_back(component);
}

void Entity::removeComponent(Component * component)
{
	// Not implemented...
}

int Entity::getId()
{
	return m_id;
}

std::vector<Component *> Entity::getComponents()
{
	return m_components;
}