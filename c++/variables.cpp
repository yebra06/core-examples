#include <iostream>
using namespace std;

// This is a global variable. You can access this anywhere in program.
const int GLOBAL_VARIABLE = 1;

void print_global();
int main() {
	// Local variables are only accessible w/ in their scope.
	// You cannot access local_variable in the print_global() function.
	int local_variable = 2;
	cout << GLOBAL_VARIABLE << endl;
	print_global();

	// Examples of some variables.
	// See here for difference on doubles and floats: https://stackoverflow.com/questions/2386772/what-is-the-difference-between-float-and-double
	int a = 0;
	float f = 0.0;
	double d = 0.00;
	char c = 'h'; 		// char uses '' only. 
	string s = "hi";	// string uses "" only.

	return 0;
}

void print_global() {
	cout << GLOBAL_VARIABLE << endl;
}