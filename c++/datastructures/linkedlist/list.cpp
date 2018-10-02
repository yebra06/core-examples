#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

list::list()
:len(0), head(0) {}

list::list(const list& other)
: len(other.len), head(0) {
	node* temp = other.get_head();

	while (temp != 0) {
		insert_last(temp->data);
		temp = temp->next;
	}
}

list::~list() {
	delete_list();
}

list& list::operator=(list src) {
	swap(head, src.head);
	return *this;
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

void list::concat(const list& l2) {
	node* temp1 = head;
	node* temp2 = l2.get_head();

	while (temp1->next)
		temp1 = temp1->next;

	while (temp2->next) {
		insert_last(temp2->data);
		temp2 = temp2->next;
	}

	insert_last(temp2->data);
}

bool list::is_empty() const {
	return head == 0;
}

node* list::get_head() const {
	return head;
}
