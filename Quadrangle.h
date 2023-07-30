#pragma once
#include "Figure.h"

class Quadrangle : public Figure// класс Четырёхугольник
{
protected:
	int side_a = 0;
	int side_b = 0;
	int side_c = 0;
	int side_d = 0;
	int corner_A = 0;
	int corner_B = 0;
	int corner_C = 0;
	int corner_D = 0;
public:
	Quadrangle();

	Quadrangle(int side_a, int side_b, int side_c, int side_d, int corner_A, int corner_B, int corner_C, int corner_D);

	int get_side_a();
	int get_side_b();
	int get_side_c();
	int get_side_d();
	int get_corner_A();
	int get_corner_B();
	int get_corner_C();
	int get_corner_D();

	virtual void print_myself();
};
