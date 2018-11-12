#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "Component.h"

class HealthComponent : public Component
{
public:
	HealthComponent(int healthIn);
	~HealthComponent();
	int getHealth();
	void setHealth(int healthIn);
private:
	int m_health;
};

#endif // !HEALTHCOMPONENT_H