#pragma once
#include "Figure.h"


class Triangle : public Figure// класс Треугольник
{
protected:
	int side_a = 0;
	int side_b = 0;
	int side_c = 0;
	int corner_A = 0;
	int corner_B = 0;
	int corner_C = 0;

public:
	Triangle();

	Triangle(int side_a, int side_b, int side_c, int corner_A, int corner_B, int corner_C);

	int get_side_a();
	int get_side_b();
	int get_side_c();
	int get_corner_A();
	int get_corner_B();
	int get_corner_C();

	virtual void print_myself();
};
