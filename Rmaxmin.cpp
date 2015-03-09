#include "Rmaxmin.hpp"

Rmaxmin Rmaxmin::zero(-std::numeric_limits<double>::infinity());
Rmaxmin Rmaxmin::unit(std::numeric_limits<double>::infinity());

Rmaxmin::Rmaxmin()
: value(numeric_limits<double>::infinity())
{
}

Rmaxmin::Rmaxmin(double value)
: value(value)
{

}

Rmaxmin::Rmaxmin(Rmaxmin& other)
: value(other.value)
{

}
bool Rmaxmin::operator == (Rmaxmin& other)
{
	return value==other.value;

}
string Rmaxmin::toString()
{
	stringstream out;
	if(*this==zero)
		out<<"-oo";
	if(*this==unit)
		out<<"+oo";
	else
		out<< value;
	return out.str();
}

Rmaxmin Rmaxmin::operator + (Rmaxmin& other)
{
	return(max(value,other.value));
}

Rmaxmin& Rmaxmin::operator = (Rmaxmin& other)
{
	Rmaxmin value=other.value;
	return *this;
}

Rmaxmin Rmaxmin::operator * (Rmaxmin& other)
{
	return(min(value,other.value));
}