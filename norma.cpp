// матрицы1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX = 100;
int _tmain(int argc, _TCHAR* argv[])
{
	int n, m;
	int i, j;
	double a[MAX][MAX];
	double sum = 0;
	cin >> m >> n;
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			sum += pow(a[i][j], 2);
		}
	}
	cout << sqrt(sum);
	return 0;
}

