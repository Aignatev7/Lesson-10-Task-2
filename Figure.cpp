#include "Figure.h"

Figure::Figure() {
	figure_name = "Фигура";
}

std::string Figure::get_figure_name() { return figure_name; }

void Figure::print_myself() {
	std::cout << get_figure_name() << std::endl;
}