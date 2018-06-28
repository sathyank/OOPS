#include<iostream>
#include "Shape.h"


using namespace std;

int main()
{
	Vertex v1(0, 1);
	Vertex v2(2, 0);
	Shape **s = new Shape *[2];
	s[0] = new Circle(1);
	s[0]->get_area();
	s[0]->get_pm();
	s[1] = new Rectangle(v1, v2);
	s[1]->get_area();
	s[1]->get_pm();
	for (int i = 0; i < 2; i++)
		delete[] s[i];
	delete[] s;
	system("pause");
	return 0;
}