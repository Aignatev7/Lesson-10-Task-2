#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle// класс Прямоугольник
{
public:
	Rectangle();

	Rectangle(int side_c, int side_d, int corner_D);
};
