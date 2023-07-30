#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void print_info(Figure* f)
{
	f->print_myself();
}

	int main() {
		setlocale(LC_ALL, "Russian");
		Triangle tri;
		print_info(&tri);
		RightTriangle rig_tri;
		print_info(&rig_tri);
		IsoscelesTriangle isos_tri;
		print_info(&isos_tri);
		EquilateralTriangle eq_tri;
		print_info(&eq_tri);
		Quadrangle quad;
		print_info(&quad);
		Rectangle rect;
		print_info(&rect);
		Square square;
		print_info(&square);
		Parallelogram paral;
		print_info(&paral);
		Rhomb rhomb;
		print_info(&rhomb);
	}
