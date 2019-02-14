#include <iostream>
using namespace std;

int main() {
	int x = 1;
	int y = 2;

	/* Psuedo code
		if condition is true {
			do this stuff
		}

		if condition is true {
			do this stuff
		} else {
			do this
		}

		if condition is true {
			do this stuff
		} else if this condition is true {
			do this stuff and skip the rest of conditions
		} else if this condition is true {
			do this stuff and skip the rest of conditions
		} else {
			no other condition was true so do this
		}

	*/

	if (x < y) {
		// Since condition is true, this code will be executed.
		cout << "x is less than y" << endl;
	}

	if (x > y) {
		// Since condition is false, this line will not be reached.
		cout << "x is less than y" << endl;
	}

	if (x > y) {
		// Since condition is false, this line will not be reached.
		cout << "x is less than y" << endl;
	} else {
		// Condition was not true, so this code will be run.
		cout << "x is not greater than y" << endl;
	}

	if (x > y) {
		// Since condition is false, this line will not be reached.
		cout << "x is less than y" << endl;
	} else {
		// Condition was not true, so this code will be run.
		cout << "x is not greater than y" << endl;
	}

	if (x < y) {
		// Since condition is true, this code will be executed,
		// and rest of if else conditions will be skipped.
		cout << "x is less than y, skipping other else if conditions" << endl;
	} else if (x <= y) {
		// This condition is still true, but since first condition is true,
		// the code in that condition will be run and this part will be skipped.
		cout << "You wil not see this even though my condition is true am true.";
	}
}