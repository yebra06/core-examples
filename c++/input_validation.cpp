#include <iostream>
using namespace std;

int get_input();
int main() {
  int x = get_input();
  return 0;
}
int get_input() {
  int choice = 0;
  cout << "Enter an integer: ";

  while (!(cin >> choice)) {
    cout << "\nPlease enter integer: ";
    cin.clear();
    cin.ignore(100, '\n');
  }
  
  return choice;
}
