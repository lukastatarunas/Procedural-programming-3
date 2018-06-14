#include <iostream>
#include <fstream>

using namespace std;

void function(unsigned int n)
{
	ofstream fout;
	fout.open("o.txt", ios::app);
	if (n > 0)
	{
		fout << n % 10 << endl;
		function(n / 10);
	}
}

int main()
{
	unsigned int n;
	ifstream fin;
	fin.open("input.txt");
	fin >> n;
	function(n);
}
