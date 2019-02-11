#include <iostream>
using namespace std;
#include "bst.h"


int main() {
    bst b = bst();
    cout << b.is_empty() << endl;
    b.insert(1);
    cout << b.is_empty() << endl;
    b.insert(1);
    cout << b.contains(2) << endl;
    cout << "size: " << b.size() << endl;
    return 0;
}
