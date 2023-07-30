#include "Square.h"

Square::Square() {
	figure_name = " вадрат";
	side_a = side_b = side_c = side_d = 20;
	corner_A = corner_B = corner_C = corner_D = 90;
}

Square::Square(int side_d, int corner_D) {
	side_a = side_b = side_c = side_d = 0;
	corner_A = corner_B = corner_C = corner_D = 0;
}