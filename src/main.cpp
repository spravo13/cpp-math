#include <cmath>
#include <iostream>
#include "declare.h"

using namespace std;

void programs() {

	cout <<"Program name\t\tCommand\n\n";
	cout <<"degree to radian\td2r\n";
	cout <<"radian to degree\tr2d\n";
	cout <<"circle area\t\tca\n";
	cout <<"trapezoid area\t\tta\n";
	cout <<"parallelogram area\tpa\n";
	cout <<"triangle area\t\ttea\n";
	cout <<"cylinder surface area\tcsa\n";
	cout <<"cylinder volume\t\tcv\n";
	cout <<"sphere surface area\tssa\n";
	cout <<"sphere volume\t\tsv\n";
	cout <<"circumference\t\tc\n";
	cout <<"arc length\t\tal\n";
	cout <<"sector area\t\tsa\n";
	cout <<"quadratic formula\tqf\n";

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
		} else if (program == "cv"){
			cylinder_volume();
		} else if (program == "ssa"){
			sphere_surface_area();
		} else if (program == "sv"){
			sphere_volume();
		} else if  (program == "c"){
			circumference();
		} else if (program == "al"){
			arc_length();
		} else if (program == "sa"){
			sector_area();
		} else if (program == "qf"){
			quadratic_formula();
		} else {
			cout << "That's not a program, type \"p\" for a list\n";
		}
	}
	return 0;

}

