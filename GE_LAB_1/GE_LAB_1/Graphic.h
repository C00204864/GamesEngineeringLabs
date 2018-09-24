#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <iostream>
#include "IGraphic.h"

class Graphic: public IGraphic
{
public:
	Graphic();
	~Graphic();
	void draw() override;
};

#endif // !GRAPHIC_H
