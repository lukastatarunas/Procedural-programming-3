#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("14.in");
	int n;
	fin >> n;
	long long Fibonacci[n];
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	Fibonacci[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	ofstream fout;
	fout.open("14.txt");
	fout << Fibonacci[n];
}
