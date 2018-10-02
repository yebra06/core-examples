#include <iostream>
using namespace std;
#include "list.h"

int main() {
	list l = list();

	cout << "insert first" << endl;
	l.insert_first(1);
	l.insert_first(2);
	l.insert_first(3);
	l.display(cout);

	cout << "delete first" << endl;
	l.delete_first();
	l.display(cout);

	cout << "insert last" << endl;
	l.insert_last(4);
	l.insert_last(5);
	l.display(cout);

	cout << "test copy constructor" << endl;
	list l2(l);
	l2.display(cout);

	cout << "test assignment operator" << endl;
	list l3 = l;
	l3.display(cout);

	return 0;
}
