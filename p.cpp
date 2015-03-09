// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>


using namespace std;
float f(float x)
{
	return (x*x*x) / 6 + 2;
}
float F(float a, float b, int n)
{ 
	float d;
	float s = 0;
	d = (b - a) / n; //кол-во разбиваний
	float y1;
	float y2;
	while (a<b)
	{
		y1 = f(a);
		y2 = f(a+d);
		s = s + (y1 + y2)*(d / 2);
		a = a + d;
		
	}
	return s;
}
int _tmain(int argc, _TCHAR* argv[])
{
	float a, b;
	int n;
	cin >> a >> b >> n;
	bool flag;
	if (a > b)
	{
		cout << "Nevernye predely!!" << endl;
		exit(0);
	}
	float integral;
	integral = F(a, b, n);
	cout << integral;
	
	return 0;
}


