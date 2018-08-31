#include <iostream>
using namespace std;

int main() {

	// Dynamically allocate memory for an list of integers.
	const size_t SIZE = 10;
	int* list = new int[SIZE];

	// Initialize list.
	for (int i = 0; i < SIZE; i++)
		list[i] = 0;

	// Display list
	for (int i = 0; i < SIZE; i++)
		cout << list[i] << " ";

	// Free allocated memory.
	delete [] list;

	return 0;
}