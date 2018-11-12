#include "HealthSystem.h"

HealthSystem::HealthSystem() {}

HealthSystem::~HealthSystem() {}

void HealthSystem::updateComponent(Component * component)
{
	HealthComponent * hc = dynamic_cast<HealthComponent *>(component);
	if (nullptr != hc)
	{
		int health = hc->getHealth();
		std::cout << health << std::endl;
		hc->setHealth(--health);
	}
}