#include <cmath>
#include <iostream>

using namespace std;

void arc_length() {

	const double pi = 4.0*atan(1.0);
	float d, a, l;

	cout << "Diameter of circle: ";
	cin >> d;
	cout << "Angle measure: ";
	cin >> a;

	if(a>360 or a<0){
		cout << "Angle is not possible\n";
	} else {
		l = (pi*d) * (a/360);

		cout << "length of arc: " << l << "\n";
	}
}
