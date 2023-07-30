#include "Rhomb.h"

Rhomb::Rhomb() {
	figure_name = "Ромб";
	side_a = side_b = side_c = side_d = 30;
	corner_A = corner_C = 30;
	corner_B = corner_D = 40;
}

Rhomb::Rhomb(int side_d, int corner_C, int corner_D) {
	side_a = side_b = side_c = side_d = 30;
	corner_A = corner_C = 30;
	corner_B = corner_D = 40;
}