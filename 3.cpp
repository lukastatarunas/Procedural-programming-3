#include <iostream>

using namespace std;

void DecToBin(int a)
{
	int likutis;
	if (a <= 1)
	{
		cout << a;
		return;
	}
	likutis = a % 2;
	DecToBin(a / 2);
	cout << likutis;
}

int main()
{
	unsigned long long dec;
	cin >> dec;
	DecToBin(dec);
}
