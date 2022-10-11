#include <cmath>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main() {
	int i, k;
	double S, P;
	//while 
	P = 1;
	i = 1;
	while (i <= 10) {
		S = 0;
		k = 1;
		while (k <= i) {
			S += 1. / k;
			k++;
		}
		P *= (i + S) / sqrt(S);
		i++;

	}
	cout << "P_while: " << P << endl;
	//do_while
	P = 1;
	i = 1;
	do {
		S = 0;
		k = 1;
		do {
			S += 1. / k;
			k++;
		} while (k <= i);
		P *= (i + S) / sqrt(S);
		i++;
	} while (i <= 10);
	cout << "P_do_while: " << P << endl;
	//for_plus
	P = 1;
	for (i = 1; i <= 10; i++) {
		S = 0;
		for (k = 1;k <= i;k++) {
			S += 1. / k;
		}
		P *= (i + S) / sqrt(S);
	}
	cout << "P_for_plus: " << P << endl;

	//for_minus
	P = 1;
	for (i = 10; i >= 1; i--) {
		S = 0;
		for (k = i;k >= 1;k--) {
			S += 1. / k;
		}
		P *= (i + S) / sqrt(S);
	}
	cout << "P_for_minus: " << P << endl;




	return 0;
}