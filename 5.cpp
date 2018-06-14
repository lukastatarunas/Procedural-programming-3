#include <iostream>
#include <iomanip>

using namespace std;

double function(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
	double S, P, width, height;
	height = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
	width = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	S = width * height;
	P = 2 * (width + height);
	cout << fixed << setprecision(5) << S << endl;
	cout << fixed << setprecision(5) << P;
	return S, P;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	function(x1, y1, x2, y2, x3, y3, x4, y4);
}
