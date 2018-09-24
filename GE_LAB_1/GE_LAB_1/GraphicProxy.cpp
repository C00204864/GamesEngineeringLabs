#include "GraphicProxy.h"

GraphicProxy::GraphicProxy() : graphic(nullptr) {}

GraphicProxy::~GraphicProxy() {}

void GraphicProxy::draw()
{
	getInstance()->draw();
}

IGraphic * GraphicProxy::getInstance()
{
	if (nullptr == graphic)
	{
		graphic = new Graphic();
	}
	return graphic;
}