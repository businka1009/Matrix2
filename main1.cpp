// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	double a, b;
	int n;
	cin >> a >> b >> n;
	int i;
	double result, h;

	result = 0;

	h = (b - a) / n; 

	for (i = 0; i < n; i++)
	{
		result += ((a + h * (i + 0.5))*(a + h * (i + 0.5))*(a + h * (i + 0.5)))/6+2; 
	}

	cout<< result*h;
	return 0;
}

