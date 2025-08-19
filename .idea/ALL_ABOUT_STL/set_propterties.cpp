#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s; // Stores unique elements in sorted order (ascending by default)

    // Insert elements
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1); // Duplicate — ignored
    s.insert(1); // Duplicate — ignored

    // Iterate and print
    for (auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }

    return 0;
}