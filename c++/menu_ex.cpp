#include <iostream>
using namespace std;

void display_menu();
int main() {
	int choice = 0;
	display_menu();
	while (choice != 3) {
		cout << "Enter menu option: ";
		cin >> choice;
		switch (choice) {
			case 1:
				cout << "hello" << endl;
				break;
			case 2:
				cout << 10 << endl;
				break;
			case 3:
				cout << "Exiting program" << endl;
				break;
			default:
				cout << "Invalid choice" << endl;
				break;
		}
	}
	return 0;
}
void display_menu() {
	cout << endl << "Menu" << endl
		<< "1 - Print string" << endl
		<< "2 - Print integer" << endl
		<< "3 - Exit program" << endl << endl;
}
