#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Konvertacija(int A[], string s)
{
	A[0] = s.length();
	string s1;
	for (int i = 1; i <= s.length(); i++)
	{
		A[i] = s[s.length() - i] - '0';
		s1 = s[s.length() - i];
		A[i] = atoi(s1.c_str());
	}
}

void Suma(int A[], int B[])
{
	int m = max(A[0], B[0]);
	int c = 0;
	for (int i = 1; i <= m; i++)
	{
		c = c + A[i] + B[i];
		A[i] = c % 10;
		c = c / 10;
	}
	if (c > 0)
	{
		m = m + 1;
		A[m] = c;
	}
	A[0] = m;
}

void Skirtumas(int A[], int B[])
{
	int c = 0;
	for (int i = 1; i <= A[0]; i++)
	{
		c = c + A[i] - B[i] + 10;
		A[i] = c % 10;
		if (c < 10)
		{
			c = -1;
		}
		else
		{
			c = 0;
		}
	}
	while (A[A[0]] == 0 && A[0] > 1)
	{
		A[0] = A[0] - 1;
	}
}

int main()
{
	string s1, s2;
	int A[1000] = { 0 };
	int B[1000] = { 0 };
	cin >> s1 >> s2;
	Konvertacija(A, s1);
	Konvertacija(B, s2);
	int a = atoi(s1.c_str());
	int b = atoi(s2.c_str());
	if (a > 100000 && b > 100000)
	{
		if (s1.length() > s2.length())
		{
			Skirtumas(A, B);
			for (int i = A[0]; i >= 1; i--)
			{
				cout << A[i];
			}
		}
		else if (s1.length() < s2.length())
		{
			Suma(A, B);
			for (int i = A[0]; i >= 1; i--)
			{
				cout << A[i];
			}
		}
		else if (s1.length() == s2.length())
		{
			for (auto n = 0; n < s1.length(); n++)
			{
				if (A[n] > B[n])
				{
					Skirtumas(A, B);
					for (int i = A[0]; i >= 1; i--)
					{
						cout << A[i];
					}
				}
				else if (A[n] < B[n])
				{
					Suma(A, B);
					for (int i = A[0]; i >= 1; i--)
					{
						cout << A[i];
					}
				}
				else
				{
					if (A[s1.length()] == B[s2.length()] && n - 1 == s2.length())
					{
						cout << 0;
					}
				}
			}
		}
	}
	else
	{
		if (a > b)
		{
			cout << a - b;
		}
		else if (a == b)
		{
			cout << 0;
		}
		else
		{
			cout << a + b;
		}
	}
}
