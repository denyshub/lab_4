#include <cmath>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main() {

	double xp, xk, x, step, eps, a = 0, R = 0, S = 0;
	int n=0;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;
	cout << "Enter accur: "; cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log((1+x)/(1-x))" << " |"
		<< setw(7) << "     S    " << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------------" << endl;

	x = xp;
	while (x <= xk) {
		n = 0;
		a = x;
		S = a;
		do {
			n++;
			R = x * x * (2 * n - 1) / (2 * n + 1); 
			a *= R;
			S += a;
		}while (abs(a) >= eps);

		double result = 2*S;
		double form = log((1 + x) / (1 - x));

		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(18) << setprecision(5) << form << " |"
			<< setw(10) << setprecision(5) << result << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += step;
	}

	cout << "-----------------------------------------------" << endl;

	return 0;
}