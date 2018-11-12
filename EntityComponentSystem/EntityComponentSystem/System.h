#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <vector>
#include "Entity.h"

class System
{
public:
	System();
	~System();
	virtual void addEntity(Entity entity);
	virtual void removeEntity(int id);
	virtual void update();
protected:
	virtual void updateComponent(Component * component);
	std::vector<Entity> m_entities;
};

#endif // !SYSTEM_H
