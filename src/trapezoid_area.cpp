#include <iostream>
#include <cmath>
void trapezoid_area() {
    using namespace std;
    float h, b1, b2, a;
    cout << "Enter height: ";
    cin >> h;
	cout << "Enter base one length: ";
	cin >> b1;
	cout << "Enter base two lenght: ";
	cin >> b2;
    a = ((b1 + b2) / 2) * h;
    cout << "Area is: " << a << "\n";
}
