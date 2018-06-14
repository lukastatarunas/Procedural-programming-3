#include <iostream>
#include <fstream>

using namespace std;

long long doublefactorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else return n * doublefactorial(n - 2);
}

int main()
{	
	int n;
	ifstream fin;
	fin.open("13.txt");
	fin >> n;
	fin.close();
	ofstream fout;
	fout.open("13.out");
	fout << doublefactorial(n);
	fout.close();
}
