#include "list.h"
#include "node.h"
using namespace std;
#include <iostream>

list::list()
: len(0), head(nullptr) {}

list::list(const list& other)
: len(other.len), head(nullptr) {
	node* temp = other.get_head();

	while (temp != nullptr) {
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
	new_node->next = nullptr;

	if (!head) {
		head = new_node;
	} else {
		node* curr = head;

		while (curr->next != nullptr)
			curr = curr->next;

		curr->next = new_node;
	}

	++len;
}

void list::insert_at_position(int position, const int& data) {
	// Note: 0 is index of first list item.
	if (position > len || position < 0) {
		return;
	} else if (position == 0 || head == nullptr) {
		insert_first(data);
		return;
	} else if (position == len) {
		insert_last(data);
		return;
	}

	node* new_node = new node();
	new_node->data = data;
	node* prev = nullptr;
	node* curr = head;

	for (int i = 0; i < position; i++) {
		prev = curr;
		curr = curr->next;
	}

	new_node->next = curr;
	prev->next = new_node;
	++len;
}

void list::concat(const list& l2) {
	node* temp1 = head;
	node* temp2 = l2.get_head();

	while (temp1->next != nullptr)
		temp1 = temp1->next;

	while (temp2->next != nullptr) {
		insert_last(temp2->data);
		temp2 = temp2->next;
	}

	insert_last(temp2->data);
}

void list::delete_first() {
	node* temp = head;
	head = temp->next;

	delete temp;
	--len;
}

void list::delete_last() {
	node* curr = head;
	node* prev = nullptr;

	while (curr->next != nullptr) {
		prev = curr;
		curr = curr->next;
	}

	delete curr;
	prev->next = nullptr;
	--len;
}

void list::delete_at_position(int position) {
	if (position > len || position < 0) {
		return;
	} else if (position == 0) {
		delete_first();
		return;
	} else if (position == len) {
		delete_last();
		return;
	}

	node* temp = nullptr;
	node* curr = head;

	for (int i = 0; i < position-1; i++)
		curr = curr->next;

	temp = curr->next;
	delete temp;
	curr->next = curr->next->next;
	--len;
}

void list::delete_item(int item) {
	int position = 0;
	node* temp = head;

	while (temp->next != nullptr && temp->data != item) {
		position++;
		temp = temp->next;
	}

	delete_at_position(position);
}

void list::delete_list() {
	while (!is_empty())
		delete_first();
}

int list::size() const {
	return len;
}

bool list::is_empty() const {
	return head == nullptr;
}

node* list::get_head() const {
	return head;
}
