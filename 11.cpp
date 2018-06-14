#include <iostream>
#include <fstream>

using namespace std;

int F(int n)
{
	if (n < 2)
	{
		return n;
	}
	else
	{
		return (F(n - 1) + F(n - 2));
	}
}

int main()
{
	int n;
	ifstream fin;
	fin.open("11.in");
	fin >> n;
	fin.close();
	ofstream fout;
	fout.open("11.out");
	fout << F(n);
	fout.close();
}
