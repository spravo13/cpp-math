#include <cmath>
#include <iostream>

using namespace std;

//declare functions so they can be called later
void degree_to_radian();
void radian_to_degree();
void circle_area();
void trapezoid_area();
void parallelogram_area();
void triangle_area();
void cylinder_surface_area();
//end of declaring

void programs() {
	cout <<"Program name\t\tCommand\n\n";
	cout <<"degree to radian\td2r\n";
	cout <<"radian to degree\tr2d\n";
	cout <<"circle area\t\tca\n";
	cout <<"trapezoid area\t\tta\n";
	cout <<"parallelogram area\tpa\n";
	cout <<"triangle area\t\ttea\n";
	cout <<"cylinder surface area\tcsa\n";

	cout <<"\n";
}

int main() {
	string program;	
	while (program != "q") {
		cout << "Select a program: ";
		cin >> program;
		if (program == "p") {
			programs();
		} else if (program == "q") {
			cout << "quitting...\n";
		} else if (program == "d2r") {
			degree_to_radian();
		} else if (program == "r2d") {
			radian_to_degree();
		} else if (program == "ca") {
			circle_area();
		} else if (program == "ta") {
			trapezoid_area();
		} else if (program == "pa") {
			parallelogram_area();
		} else if (program == "tea") {
			triangle_area();
		} else if (program == "csa") {
			cylinder_surface_area();
		} else {
			cout << "That's not a program, type \"p\" for a list\n";
		}
	}
	return 0;
}
