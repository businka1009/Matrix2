#include "Rmax.hpp"
#include <iostream>
#include <limits>


Rmax Rmax::zero(-std::numeric_limits<double>::infinity()); //инициализируем переменные 
Rmax Rmax::unit(1);

Rmax::Rmax() //содержимое конструкторов, т е то что выполняет конструктор
: value(-std::numeric_limits<double>::infinity()) 
{
	
}
Rmax::Rmax(double value_)
: value(value_)
{
	std::cout<<"***"<<std::endl;
}
Rmax::Rmax(Rmax& other)
: value(other.value) 
{

}
Rmax Rmax::operator+(Rmax& other)
{
	return Rmax(std::max(value, other.value));
}

Rmax Rmax::operator*(Rmax& other)
{
	return Rmax(value+other.value);
}

Rmax& Rmax::operator=(Rmax& other)
{
	value=other.value;
	return *this;
}

bool Rmax::operator==(Rmax& other)
{
	return value==other.value;
}

std::string Rmax::toString()
	{
		std::stringstream out;
		if(*this==zero)
			out<<"-oo";
		else
			out<<value;
		return out.str();
	}