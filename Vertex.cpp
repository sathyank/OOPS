#include "Vertex.h"
#include <iostream>

using namespace std;



Vertex::Vertex()
{
	setX(0);
	setY(0);
}

Vertex::Vertex(float x, float y)
{
	setX(x);
	setY(y);
}

void Vertex::setX(float x)
{
	if (x<0)
	{
		std::cout << "Invalid value for x, Setting to default"<<endl;
		this->x = 0.0;
	}
	else
		this->x = x;
}

void Vertex::setY(float y)
{
	if (y<0)
	{
		std::cout << "Invalid value for y, Setting to default"<<endl;
		this->y = 0.0;
	}
	else
		this->y = y;
}

float Vertex::getX() const
{
	return x;
}

float Vertex::getY() const
{
	return y;
}

void Vertex::print() const
{
	cout << "X:" << this->x << "  " << "Y:" << this->y<<endl;
}

float getDist(Vertex p1, Vertex p2)
{
	float distX = p1.getX() - p2.getX();
	float distXSquared = (distX * distX);
	float distY = (p1.getY() - p2.getY());
	float distYSquared = (distY * distY);
	float distXY = sqrt(distXSquared + distYSquared);
	return distXY;
}


