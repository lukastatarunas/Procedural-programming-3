#include <iostream>

using namespace std;

void NuskaitytiSeka(int matrica[], int kiekis)
{
	for (int i = 0; i < kiekis; i++)
	{
		cin >> matrica[i];
	}
}

void SurikiuotiElementus(int matrica[], int kiekis)
{
	int j;
	for (int i = 1; i < kiekis; i++)
	{
		j = i;
		while (j > 0 && matrica[j] > matrica[j - 1])
		{
			swap(matrica[j], matrica[j - 1]);
			j--;
		}
	}
}

void SpausdintiRezultatus(int matrica[], int kiekis)
{
	for (int i = 0; i < kiekis; i++)
	{
		cout << matrica[i] << " ";
	}
	cout << endl;

}

int main()
{
	int matrica[10000], kiekis;
	cin >> kiekis;
	NuskaitytiSeka(matrica, kiekis);
	SurikiuotiElementus(matrica, kiekis);
	SpausdintiRezultatus(matrica, kiekis);
}
