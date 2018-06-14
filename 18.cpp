#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void remove(vector<vector<char>> &matrix, int i, int j)
{
	matrix[i][j] = '.';
	if ((i - 1) >= 0 && matrix[i - 1][j] == '#')
	{
		remove(matrix, i - 1, j);
	}
	if ((j + 1) < matrix[i].size() && matrix[i][j + 1] == '#')
	{
		remove(matrix, i, j + 1);
	}
	if ((i + 1) < matrix.size() && matrix[i + 1][j] == '#')
	{
		remove(matrix, i + 1, j);
	}
	if ((j - 1) >= 0 && matrix[i][j - 1] == '#')
	{
		remove(matrix, i, j - 1);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<char>> matrix(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == '#')
			{
				count++;
				remove(matrix, i, j);
			}
		}
	}
	cout << count;
}
