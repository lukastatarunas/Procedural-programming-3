#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n, t, m;
	cin >> n1;
	int *m1 = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		cin >> t;
		m1[i] = t;
	}
	cin >> n2;
	n = n1 + n2;
	int *m2 = new int[n];
	for (int i = n1; i < n; i++)
	{
		cin >> t;
		m2[i] = t;
	}
	for (int i = 0; i < n1; i++)
	{
		m2[i] = m1[i];
	}
	delete[] m1;
	int j;
	for (int i = 1; i < n; i++)
	{
		j = i;
		while (j > 0 && m2[j] < m2[j - 1])
		{
			swap(m2[j], m2[j - 1]);
			j--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << m2[i] << " ";
	}
}
