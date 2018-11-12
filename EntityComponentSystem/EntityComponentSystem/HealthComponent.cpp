#include "HealthComponent.h"

HealthComponent::HealthComponent(int healthIn) 
{
	m_health = healthIn;
}

HealthComponent::~HealthComponent() {}

int HealthComponent::getHealth()
{
	return m_health;
}

void HealthComponent::setHealth(int healthIn)
{
	m_health = healthIn;
}