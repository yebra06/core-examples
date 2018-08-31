#include <iostream>
using namespace std;

int main() {

	// Simple output.
	int a = 10;
	int b = 20;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	// Prompt use for new values and get input.
	cout << "Enter new value for a: ";
	cin >> a;
	cout << "Enter new value for b: ";
	cin >> b;

	// Output new values that user inputed.
	cout << "new a: " << a << endl;
	cout << "new b: " << b << endl;

	return 0;
}

/* output
a: 10
b: 20
Enter new value for a: 5
Enter new value for b: 1
new a: 5
new b: 1
*/