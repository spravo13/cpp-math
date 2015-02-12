#include <cmath>
#include <iostream>

using namespace std;

void quadratic_formula() {

	float a, b, c, d, qf1, qf2;
	int dis;

	cout << "A value: ";
	cin >> a;
	cout << "B value: ";
	cin >> b;
	cout << "C value: ";
	cin >> c;

	dis = pow(b,2) - (4 * a * c);
	
	if (dis < 0) {
		cout << "No real solutions\n";
	} else {	
		d = (pow(b,2)) - (4*a*c);
		d = pow(d,.5);
		qf1 = (-b + d) / 2 * a;
		qf1 = (-b - d) / 2 * a;

		if(dis == 0) {
			cout << "Solution: (" << qf1 << ",0)\n";
		} else {
			cout << "Solution 1: (" << qf1 << ",0)\n";
			cout << "Solution 2: (" << qf2 << ",0)\n";
		}
	}
}
