#ifndef RMAX_HPP
#define RMAX_HPP
#include <algorithm>
#include <string>
#include <sstream>

class Rmax
{public:
	Rmax(); //������ �����������
	Rmax(double value);  //�� �����
	Rmax(Rmax& other); //Rmax& - �������� �� ������ �������� Rmax // �� ������� �������
	Rmax operator+(Rmax& other);
	Rmax operator*(Rmax& other);
	Rmax& operator=(Rmax& other);
	bool operator==(Rmax& other);
	std::string toString();
	static Rmax zero; //����������� ����������
	static Rmax unit;
	double value;
};

#endif 