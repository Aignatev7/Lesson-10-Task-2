#include "Parallelogram.h"

Parallelogram::Parallelogram() {
	figure_name = "ֿאנאככוכמדנאלל";
	side_a = side_c = 20;
	side_b = side_d = 30;
	corner_A = corner_C = 30;
	corner_B = corner_D = 40;
}

Parallelogram::Parallelogram(int side_c, int side_d, int corner_C, int corner_D) {
	side_a = side_c = 0;
	side_b = side_d = 0;
	corner_A = corner_C = 0;
	corner_B = corner_D = 0;
}