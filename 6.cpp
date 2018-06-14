#include <iostream>

using namespace std;

bool IsPrime(long long a)
{
	if (a < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(a); i++)
	{
		if ((a % i) == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long long a;
	cin >> a;
	cout << IsPrime(a);
}
