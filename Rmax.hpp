#ifndef RMAX_HPP
#define RMAX_HPP
#include <algorithm>
#include <string>
#include <sstream>

class Rmax
{public:
	Rmax(); //пустой конструктор
	Rmax(double value);  //из числа
	Rmax(Rmax& other); //Rmax& - передает по ссылке значение Rmax // из другого объекта
	Rmax operator+(Rmax& other);
	Rmax operator*(Rmax& other);
	Rmax& operator=(Rmax& other);
	bool operator==(Rmax& other);
	std::string toString();
	static Rmax zero; //статические переменные
	static Rmax unit;
	double value;
};

#endif 