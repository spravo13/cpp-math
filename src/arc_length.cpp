#include <cmath>
#include <iostream>

using namespace std;

void arc_length() {

	float d, a, l;
	
	cout << "Diameter of circle: ";
	cin >> d;
	cout << "Angle measure: ";
	cin >> a;
	
	if(a>360 or a<0) {
		cout << "Angle is not possible\n";
	} else {
		l = (M_PI*d) * (a/360);
		cout << "length of arc: " << l << "\n";
	}

}
