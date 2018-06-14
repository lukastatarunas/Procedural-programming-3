#include <iostream>

using namespace std;

void Keisti(int *a, int *b)
{
	swap(*a, *b);
	cout << *a << " " << *b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	Keisti(&a, &b);
}
