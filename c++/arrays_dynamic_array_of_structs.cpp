#include <iostream>
using namespace std;

struct user {
	int id;
	string first_name;
	string last_name;
};

int main() {

	// Dynamically allocate memory on HEAP for a list of users.
	const size_t SIZE = 5;
	struct user* users = new struct user[SIZE];

	// Initialize list.
	for (int i = 0; i < SIZE; i++) {
		users[i].id = i;
		users[i].first_name = "first";
		users[i].last_name = "last";
	}

	// Display list.
	for (int i = 0; i < SIZE; i++)
		cout << "id: " <<  users[i].id << endl
			<< users[i].first_name << endl
			<< users[i].last_name << endl << endl;

	// Free allocated memory.
	delete [] users;

	return 0;
}

/* output
id: 0
first
last

id: 1
first
last

id: 2
first
last

id: 3
first
last

id: 4
first
last
*/