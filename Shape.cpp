#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Vertex.h"

using namespace std;


Circle::Circle(float r)
{
	radius = r;
}


void Circle::get_area()
{
	cout<<"area of circle = "<< 3.14 * radius * radius <<endl;
}

void Circle::get_pm()
{
	cout << "perimeter of circle = " << 2*3.14 * radius<< endl;
}

Triangle::Triangle(Vertex v1, Vertex v2, Vertex v3)
{
	p1 = v1;
	p2 = v2;
	p3 = v3;
	a = getDist(p1, p2);
	b = getDist(p2, p3);
	c = getDist(p1, p3);
}


void Triangle::get_area()
{
	float tmp = sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c));
	cout << "area of Triangle = " << tmp * 0.25 << endl;
}

void Triangle::get_pm()
{
	cout << "perimeter of Triangle = " << a+b+c << endl;
}

Rectangle::Rectangle(Vertex v1, Vertex v2)
{
	tl = v1;
	br = v2;
	Vertex tmp = tl;
	tmp.setY(tl.getY());
	tmp.setX(br.getX());
	length = getDist(tl, tmp);
	breadth = getDist(tmp, br);
}




void Rectangle::get_area()
{
	cout << "area of Rectangle = " << length * breadth << endl;
}

void Rectangle::get_pm()
{
	cout << "perimeter of Rectangle = " <<(length + breadth)*2<< endl;
}

Square::Square(Vertex v1, Vertex v2)
{
	tl = v1;
	br = v2;
	Vertex tmp = tl;
	tmp.setY(tl.getY());
	tmp.setX(br.getX());
	length = getDist(tl, tmp);

}

void Square::get_area()
{
	cout << "area of Square = " << length * length << endl;
}

void Square::get_pm()
{
	cout << "perimeter of Square = " << length * 4 << endl;
}