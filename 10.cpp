#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Funkcija(double masyvas[], double *kiekis, double *min, double *max, double *vidurkis)
{
	double suma = 0;
	*vidurkis = 0;
	*min = masyvas[0];
	*max = masyvas[0];
	for (int i = 0; i < *kiekis; i++)
	{
		if (masyvas[i] < *min)
		{
			*min = masyvas[i];
		}
		if (masyvas[i] > *max)
		{
			*max = masyvas[i];
		}
		suma = suma + masyvas[i];
	}
	*vidurkis = suma / *kiekis;
}

int main()
{
	double masyvas[100], kiekis, min = masyvas[0], max = masyvas[0], vidurkis = 0, suma = 0;

	ifstream fin;
	fin.open("seka.txt");

	fin >> kiekis;
	for (int i = 0; i < kiekis; i++)
	{
		fin >> masyvas[i];
	}

	fin.close();

	ofstream fout;
	fout.open("seka_rez.txt");

	Funkcija(masyvas, &kiekis, &min, &max, &vidurkis);
	fout << min << " " << max << " " << fixed << setprecision(2) << vidurkis;

	fout.close();
}
