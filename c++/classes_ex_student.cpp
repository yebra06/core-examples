#include <iostream>
using namespace std;

class Student {
public:
	// Default constructor.
	Student();

	// Parameterized constructor.
	Student(int id, string full_name);

	// Accessors.
	int get_id();
	string get_full_name();

	// Mutators.
	void set_id(int new_id);
	void set_full_name(string new_name);

	// Helper methods.
	void display();
private:
	int id;
	string full_name;
};

Student::Student() {
	id = 0;
	full_name = "";
}

Student::Student(int id, string full_name) {
	this->id = id;
	this->full_name = full_name;
}

int Student::get_id() {
	return id;
}

string Student::get_full_name() {
	return full_name;
}

void Student::set_id(int id) {
	this->id = id;
}

void Student::set_full_name(string full_name) {
	this->full_name = full_name;
}

void Student::display() {
	cout << "Student id: " << get_id() << endl;
	cout << "Student full name: " << get_full_name() << endl;
}

int main() {
	// Create a student "instance" or "object".
	Student student1 = Student();
	student1.set_id(1);
	student1.set_full_name("Mike Myers");
	student1.display();

	// Create a student instance and set attributes throught constructor.
	Student student2 = Student(0, "Freddie Krueger");
	student2.display();
	return 0;
}

/* output
Student id: 1
Student full name: Mike Myers
Student id: 0
Student full name: Freddie Krueger
*/