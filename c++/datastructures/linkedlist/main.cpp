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

	l.delete_list();

	return 0;
}

/* output
insert first
3 2 1 
delete first
2 1 
insert last
2 1 4 5 
*/