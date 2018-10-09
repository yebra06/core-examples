#pragma once

#include "node.h"
#include <iostream>

class stack {
public:
	// Constructors and destructor
	stack();
	~stack();

	// Mutators
	void push(const int& data);
	int pop();

	// Accessors
	int top() const;
	bool is_empty() const;
	int size() const;
	void display() const;
private:
	node* head;
};
