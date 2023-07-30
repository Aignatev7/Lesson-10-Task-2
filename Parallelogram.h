#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle // класс Параллелограмм
{
public:
	Parallelogram();

	Parallelogram(int side_c, int side_d, int corner_C, int corner_D);
};
