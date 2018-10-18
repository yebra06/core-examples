#include <iostream>
using namespace std;
#include "list.h"

void display(list& l);
int main() {
	list l;
	l.insert_last(3);
	l.insert_first(10);
	l.insert_first(1);
	l.insert_first(33);
	display(l);
	l.insert_at_position(1, 1000);
	l.insert_first(3);
	display(l);
	l.delete_item(1);
	display(l);
	return 0;
}
void display(list& l) {
	cout << "list size: " << l.size() << endl;
	node* curr = l.get_head();
	while (curr != 0) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}
