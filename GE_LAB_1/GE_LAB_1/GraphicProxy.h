#ifndef GRAPHICPROXY_H
#define GRAPHICPROXY_H

#include "Graphic.h"

class GraphicProxy
{
public:
	GraphicProxy();
	~GraphicProxy();
	void draw();

private:
	IGraphic * graphic;
	IGraphic * getInstance();
};

#endif // !GRAPHICPROXY_H
