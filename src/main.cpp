#include <iostream>
#include <cmath>
void degree_to_radian();
void radian_to_degree();
void circle_area();
void programs() {
	using namespace std;
	cout <<"Program name\t\tCommand\n\n";
	cout <<"degree to radian\td2r\n";
	cout <<"radian to degree\tr2d\n";
	cout <<"circle area\t\tca\n";
	
	cout <<"\n";
}


int main() {
	using namespace std;
	string program;	
	while(program != "q"){
		cout << "Select a program: ";
		cin >> program;
		if(program == "p"){
			programs();
		}
		else if(program == "q"){
			cout << "quitting...\n";
		}
		else if(program == "d2r"){
			degree_to_radian();
		}
		else if(program == "r2d"){
			radian_to_degree();
		}
		else if(program == "ca"){
			circle_area();
		}
		else{
			cout << "That's not a program, type \"p\" for a list\n";
		}
	}
}
