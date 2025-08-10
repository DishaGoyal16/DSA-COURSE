#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "ENTER THE NUMBER OF ROWS-";
    cin >> row;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j <row-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Created by disha on 10-08-2025.
//