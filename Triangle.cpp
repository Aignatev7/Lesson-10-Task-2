#include "Triangle.h"

Triangle::Triangle() {
	figure_name = "Треугольник";
	side_a = 10;
	side_b = 20;
	side_c = 30;
	corner_A = 50;
	corner_B = 60;
	corner_C = 70;
}

Triangle::Triangle(int side_a, int side_b, int side_c, int corner_A, int corner_B, int corner_C) {
	side_a = 0;
	side_b = 0;
	side_c = 0;
	corner_A = 0;
	corner_B = 0;
	corner_C = 0;
}

int Triangle::get_side_a() { return side_a; }
int Triangle::get_side_b() { return side_b; }
int Triangle::get_side_c() { return side_c; }
int Triangle::get_corner_A() { return corner_A; }
int Triangle::get_corner_B() { return corner_B; }
int Triangle::get_corner_C() { return corner_C; }

void Triangle::print_myself() {
	std::cout << get_figure_name() << "\nСтороны: " << "a=" << get_side_a() << " b=" << get_side_b()
		<< " c=" << get_side_c() << "\n" << "Углы: " << "А=" << get_corner_A()
		<< " B=" << get_corner_B() << " C=" << get_corner_C() << "\n" << std::endl;
}