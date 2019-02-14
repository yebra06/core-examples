#include <iostream>
using namespace std;

int main() {
	// Best practice is to define a const size for arrays if possible.
	const int SIZE = 3;

	// Array of integers.
	int x[SIZE] = {0, 1, 3};
	for (int i = 0; i < SIZE; i++)
		cout << x[i] << endl;

	// Array of chars.
	char y[SIZE] = {'a', 'b', 'c'};
	for (int i = 0; i < SIZE; i++)
		cout << y[i] << endl;

	// Array of strings.
	string s[SIZE] = {"hi", "hello", "hola"};
	for (int i = 0; i < SIZE; i++)
		cout << s[i] << endl;


	return 0;
}