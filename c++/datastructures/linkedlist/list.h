#ifndef list_h
#define list_h

#include <iostream>
using namespace std;
#include "node.h"

class list {
public:
	// Constructors & destructor
	list();
	~list();

	// Mutators
	void insert_first(const int& data);
	void insert_last(const int& data);
	void delete_first();
	void delete_list();

	// Accessors
	bool is_empty() const;
	void display(std::ostream& out) const;
private:
	int len;
	node* head;
};

#endif
