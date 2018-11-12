#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include "System.h"
#include "HealthComponent.h"

class HealthSystem : public System
{
public:
	HealthSystem();
	~HealthSystem();
	void updateComponent(Component * component) override;
};

#endif // !HEALTHSYSTEM_H
