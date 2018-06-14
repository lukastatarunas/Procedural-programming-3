#include <iostream>
#include <fstream>

using namespace std;

void rotate(int matrix[100][100], int k, int n)
{
	int t = 0;
	while (k > 4)
	{
		k = k - 4;
	}
	for (int x = 0; x < k; x++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n / 2; j++)
			{
				t = matrix[i][j];
				matrix[i][j] = matrix[i][n - 1 - j];
				matrix[i][n - 1 - j] = t;
			}
		}
	}
}

int main()
{
	int matrix[100][100], k, m, n, t;
	ifstream fin;
	fin.open("15.txt");
	fin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fin >> matrix[i][j];
		}
	}
	fin.close();

	rotate(matrix, k, n);

	ofstream fout;
	fout.open("15");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fout << matrix[i][j] << " ";
		}
		fout << endl;
	}
	fout.close();
}
