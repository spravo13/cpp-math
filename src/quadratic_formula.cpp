#include <cmath>
#include <iostream>

using namespace std;

void quadratic_formula() {

	const double pi = 4.0*atan(1.0);
	float a, b, c, d, qf1, qf2;

	cout << "A value: ";
	cin >> a;
	cout << "B value: ";
	cin >> b;
	cout << "C value: ";
	cin >> c;

	d = (pow(b,2)) - (4*a*c);
	d = pow(d,.5);
	qf1 = (-b + d) / 2 * a;
	qf1 = (-b - d) / 2 * a;

	cout << "Solution 1: (" << qf1 << ",0)\n";
	cout << "Solution 2: (" << qf2 << ",0)\n";

}
