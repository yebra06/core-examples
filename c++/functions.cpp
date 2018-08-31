#include <iostream>
using namespace std;

void display(int value);
int add(int x, int y);
int subtract(int x, int y);
int main() {
	int x = 1;
	int y = 2;
	int sum = add(x, y);
	int difference = subtract(x, y);
	display(sum);
	display(difference);
}
int subtract(int x, int y) {
	return x - y;
}
int add(int x, int y) {
	return x + y;
}
void display(int value) {
	cout << value << endl;
}

/* output
3
-1
*/
