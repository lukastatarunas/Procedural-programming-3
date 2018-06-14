#include <iostream>

using namespace std;

int dinaminis(int a, int n)
{
	int b[10];
	b[0] = 1;
	b[1] = a;
	for (int i = 2; i <= n; i++)
	{
		b[i] = b[i - 1] * a;
	}
	return b[n];
}

int main()
{
	int a, n;
	cin >> a >> n;
	cout << dinaminis(a, n);
}
