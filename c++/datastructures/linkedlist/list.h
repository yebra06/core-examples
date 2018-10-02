#ifndef list_h
#define list_h

#include <iostream>
using namespace std;
#include "node.h"

class list {
public:
	// Constructors & destructor
	list();
	list(const list& other);
	list& operator=(list src);
	~list();

	// Mutators
	void insert_first(const int& data);
	void insert_last(const int& data);
	void delete_first();
	void delete_list();
	void concat(const list& l2);

	// Accessors
	bool is_empty() const;
	void display(std::ostream& out) const;
	node* get_head() const;
private:
	int len;
	node* head;
};

#endif
