#include <iostream>
using namespace std;

void bar(int& foo);
int main() {
	int foo = 1;
	cout << "before:  " << foo << endl;
	bar(foo);
	cout << "after:   " << foo << endl;
	return 0;
}
void bar(int& foo) {
	foo = 100;
}

/* output
before:  1
after:   100
*/
