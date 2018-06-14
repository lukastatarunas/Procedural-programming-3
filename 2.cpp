#include <iostream>

using namespace std;

int Suma(int a, int b)
{
	return a + b;
}

int main()
{
	int suma = 0;
	int masyvas[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> masyvas[i];
	}
	for (int i = 0; i < 4; i++)
	{
		suma = Suma(suma, masyvas[i]);
	}
	cout << suma << endl;
}
