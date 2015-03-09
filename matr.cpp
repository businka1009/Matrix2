#include <iostream>

double determ(int** M, int size)
{
	int i, j;
	double det = 0;
	int** matr;
	if (size == 1)
	{
		det = M[0][0];
	}
	else if (size == 2)
	{
		det = M[0][0] * M[1][1] - M[0][1] * M[1][0];
	}
	else
	{
		matr = new int*[size - 1];
		for (i = 0; i<size; ++i)
		{
			for (j = 0; j<size - 1; ++j)
			{
				if (j<i)
					matr[j] = M[j];
				else
					matr[j] = M[j + 1];
			}
			det += pow((double)-1, (i + j))*determ(matr, size - 1)*M[i][size - 1];
		}
		delete[] matr;
	}
	return det;
}

int main()
{
	int size;
	std::cin >> size;
	int**M;
	M = new int*[size];
	for (int i = 0; i<size; ++i)
		M[i] = new int[size];
	for (int i = 0; i<size; ++i)
		for (int j = 0; j<size; ++j)
			std::cin >> M[i][j];
	for (int i = 0; i<size; ++i)
	{
		for (int j = 0; j<size; ++j)
			std::cout << M[i][j] << ' ';
		std::cout << std::endl;
	}
	std::cout << determ(M, size) << '\n';
	for (int i = 0; i<size; ++i)
		delete[] M[i];
	delete[] M;
	return 0;
}

