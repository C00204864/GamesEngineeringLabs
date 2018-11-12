#ifndef POSITIONCOMPONENT_H
#define POSITIONCOMPONENT_H

#include "Component.h"

class PositionComponent : public Component
{
public:
	PositionComponent(int xIn, int yIn);
	~PositionComponent();
	int getX();
	int getY();
	void setX(int xIn);
	void setY(int yIn);
private:
	int m_x;
	int m_y;
};

#endif // !POSITIONCOMPONENT_H

