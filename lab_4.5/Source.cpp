#include <cmath>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main() {
	double x;
	double y;
	double R;
	cout << "Enter R: "; cin >> R;
	srand((unsigned)time(NULL));
	//input
	for (int i = 0; i <= 10; i++) {
		cout << "Enter x: "; cin >> x;
		cout << "Enter y: "; cin >> y;

		if ((x <= 0 && x >= -R && y <= x + R && y >= 0 && y <= R) || (x >= 0 && x <= R && y * y <= R * R - x * x && y >= 0 && y <= R) || (x <= 0 && y * y <= R * R - x * x && y <= 0 && y >= -R && x >= -R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}

	cout << "it's time for random!" << endl;
	//random
	for (int i = 0; i <= 10; i++) {
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;
		if ((x <= 0 && x >= -R && y <= x + R && y >= 0 && y <= R) || (x >= 0 && x <= R && y * y <= R * R - x * x && y >= 0 && y <= R) || (x <= 0 && y * y <= R * R - x * x && y <= 0 && y >= -R && x >= -R))
			cout<< "|x|" << setw(8) << setprecision(4) << x << "  |y|"<< setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		else
			cout <<  "|x|"<<setw(8) << setprecision(4) << x << "  |y|" << setw(8) << y << "  " << "no" << endl;
	}


	return 0;
}