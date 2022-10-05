#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double x, R, xp, xk, step, r;
	cout << "Enter R: "; cin >> R;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|" << setw(2) << " " << setw(5) << "result" << setw(3) << "|" << endl;
	cout << "---------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x <= -2)
			r = x + 3;
		else
			if (-2 < x && x <= 4)
				r = -1.0 / 4 * R * x;
			else
				if (4 < x && x <= 8 - R)
					r = -R;
				else
					if (8 - R < x && x <= 8)
						r = sqrt(R * R - x * x + 16 * x - 64) - R;
					else
						if (8 < x && x <= 8 + R)
							r = sqrt(R * R - x * x + 16 * x - 64) - R;
						else
							r = -R;



		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << r
			<< " |" << endl;
		cout << "---------------------" << endl;
		x += step;
	}


	return 0;
}
