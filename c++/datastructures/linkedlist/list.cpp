#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

list::list(): len(0), head(0) {}

list::~list() {
	delete_list();
}

void list::insert_first(const int& data) {
	node* new_node = new node();
	new_node->data = data;
	new_node->next = head;
	head = new_node;
	++len;
}

void list::insert_last(const int& data) {
	node* new_node = new node();
	new_node->data = data;
	new_node->next = 0;

	if (!head) {
		head = new_node;
	} else {
		node* temp = head;

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	++len;
}

void list::display(std::ostream& out) const {
	for (node* temp = head; temp; temp = temp->next)
		out << temp->data << " ";
	out << std::endl;
}

void list::delete_first() {
	node* temp = head;
	head = temp->next;
	delete temp;
	--len;
}

void list::delete_list() {
	while (!is_empty())
		delete_first();
}

bool list::is_empty() const {
	return head == 0;
}
