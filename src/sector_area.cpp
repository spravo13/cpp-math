#include <cmath>
#include <iostream>

using namespace std;

void sector_area() {

	float r, a, sa;

	cout << "Radius of circle: ";
	cin >> r;
	cout << "Angle measure: ";
	cin >> a;

	if(a>360 or a<0) {
		cout << "Angle is not possible\n";
	} else {
		sa = (M_PI*pow(r,2)) * (a/360);

		cout << "Sector area: " << sa << "\n";
	}
}
