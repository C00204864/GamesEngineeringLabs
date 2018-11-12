#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include "Component.h"

class Entity
{
public:
	Entity();
	~Entity();
	void addComponent(Component * component);
	void removeComponent(Component * component);
	int getId();
	std::vector<Component *> getComponents();
private:
	int m_id;
	std::vector<Component *> m_components;
};

#endif // !ENTITY_H