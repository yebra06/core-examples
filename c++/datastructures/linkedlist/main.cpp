#include <iostream>
using namespace std;
#include "list.h"

void display(list& l);
int main() {
	list l;
	for (int i = 0; i < 4; i++)
		l.insert_first(i);
	display(l);
	for (int i = 0; i < 4; i++)
		l.insert_first(i);
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
