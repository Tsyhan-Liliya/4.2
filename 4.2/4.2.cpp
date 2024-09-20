#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|   x   |        y(x)                  |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = pow(x, 2) + 1;
		if (x < 4)
			B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
		else if (x >= 4 && x < 7)
			B = atan((fabs(x) + 1) / 2.) + 8.3 * x;
		else
			B = log((2 * x) + (exp(4 * x + 1)));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}