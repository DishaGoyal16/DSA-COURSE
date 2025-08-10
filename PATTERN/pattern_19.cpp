#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Number of Rows: ";
    cin >> row;
 char ch;

    int i,j;

    int l=1;

    for ( i = 0; i<row; i++) {
        ch='A';
        for (j = 1; j <=row-1-i; j++)
        {
            cout << "  ";

        }
        for (j=1;j<=l;j++) {
            cout <<ch<<" ";
            ch++;

        }
        cout << endl;

        l+=2;

    }
    return 0;
}//
// Created by disha on 10-08-2025.
//