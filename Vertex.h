#ifndef Vertex_h
#define Vertex_h
#include<iostream>

using namespace std;

class Vertex
{
public:
	Vertex();
	Vertex(float x, float y);
	float getX() const;
	float getY() const;
	void setX(float x);
	void setY(float y);
	void print() const;
private:
	float x, y;

};
float getDist(Vertex p1, Vertex p2);
#endif 

