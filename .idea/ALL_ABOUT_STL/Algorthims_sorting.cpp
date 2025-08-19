
#include <iostream>
#include <vector>
#include <algorithm> // For sort() function
using namespace std;

// Comparator function to sort pairs based on their second element


bool comparator(pair<int,int> p1, pair<int,int> p2) {
    if (p2.second > p1.second) return false;
    if (p1.second > p2.second) return true;

    if (p1.first > p2.first) return false;
    if (p1.first < p2.first) return true;

    return false; // if both are equal
}


int main() {
    // ------------------ Sorting a normal vector ------------------
    vector<int> vect1;
    vect1.push_back(12);
    vect1.push_back(21);
    vect1.push_back(34);
    vect1.push_back(45);

    // Printing elements without sorting
    cout << "Original vector: ";
    for (auto i = vect1.begin(); i != vect1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    // ------------------ Sorting a vector of pairs ------------------
    vector<pair<int,int>> v;
    v = {{1,2}, {4,4}, {3,9}, {2,4}};

    // Default sort -> sorts based on first element,
    // and if first elements are equal, then by second element
    sort(v.begin(), v.end());

    cout << "\nSorted by first element (ascending):\n";
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    // ------------------ Sorting in opposite order ------------------
    // greater<pair<int,int>>() will sort in descending order
    // based on first element primarily
    sort(v.begin(), v.end(), greater<pair<int,int>>());

    cout << "\nSorted by first element (descending):\n";
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    // ------------------ Sorting by second element ------------------
    // Using our custom comparator function
    sort(v.begin(), v.end(), comparator);

    cout << "\nSorted by second element (ascending):\n";
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}
