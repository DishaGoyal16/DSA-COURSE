#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "ENTER THE NUMBER OF ROWS-";
    cin >> row;


    for (int i = 1; i <= row; i++) {
        int k=1;
        for (int j = 1; j <=i; j++) {
            cout << k;
            k+=2;
        }
        cout << endl;
    }
}
//
// Created by disha on 10-08-2025.
//