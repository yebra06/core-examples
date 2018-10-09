#include "stack.h"
#include "node.h"
#include <iostream>

stack::stack(): head(0) {}

stack::~stack() {
	while (!is_empty()) {
		node* curr = head;
		head = curr->next;
		delete curr;
	}
}

void stack::push(const int& data) {
	node* new_node = new node();
	new_node->data = data;
	new_node->next = head;
	head = new_node;
}

int stack::pop() {
	if (is_empty())
		return 0;

	int val = head->data;
	node* temp = head;
	head = temp->next;

	delete temp;
	return val;
}

int stack::top() const {
	return is_empty() ? 0 : head->data;
}

bool stack::is_empty() const {
	return head == 0;
}

int stack::size() const {
	int len = 0;
	node* curr = head;

	while (curr != 0) {
		curr = curr->next;
		++len;
	}

	return len;
}

void stack::display() const {
	for (node* temp = head; temp; temp = temp->next)
		std::cout << temp->data << std::endl;
}

