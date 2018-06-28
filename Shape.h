#ifndef SHAPE_H
#define SHAPE_H
#include "Vertex.h"		


class Shape
{
public:
	
	virtual void get_area()=0;
	virtual void get_pm() = 0;
	virtual ~Shape() {};
};


class Circle :public Shape
{
public:
	Circle(float r);
	void get_area();
	void get_pm();
private:
	float radius;
};

class Triangle :public Shape
{
public:
	Triangle(Vertex v1, Vertex v2, Vertex v3);
	void get_area();
	void get_pm();
private:
	Vertex p1;
	Vertex p2;
	Vertex p3;
	float a, b, c;
};

class Rectangle :public Shape
{
public:
	Rectangle(Vertex v1, Vertex v2);
	void get_area();
	void get_pm();
private:
	Vertex tl;
	Vertex br;
	float length;
	float breadth;
};

class Square :public Shape
{
public:
	Square(Vertex v1, Vertex v2);
	void get_area();
	void get_pm();
private:
	Vertex tl;
	Vertex br;
	float length;
};
#endif // SHAPE_H



