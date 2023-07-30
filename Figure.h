#pragma once
#include <iostream>

class Figure // класс Фигура
{
protected:
	std::string figure_name;

public:
	Figure();

	std::string get_figure_name();

	virtual void print_myself();
};
