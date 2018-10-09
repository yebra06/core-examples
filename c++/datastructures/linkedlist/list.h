#pragma once
#include "node.h"

class list {
public:
	// Constructors & destructor
	list();
	list(const list& other);
	~list();

	// Overloaded operators
	list& operator=(list src);

	// Mutators
	void insert_first(const int& data);
	void insert_last(const int& data);
	void insert_at_position(int position, const int& data);
	void concat(const list& l2);
	void delete_first();
	void delete_last();
	void delete_at_position(int position);
	void delete_list();

	// Accessors
	int size() const;
	bool is_empty() const;
	node* get_head() const;
private:
	int len;
	node* head;
};
