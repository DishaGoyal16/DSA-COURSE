//
// Created by disha on 10-08-2025.
//
#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Number of Rows: ";
    cin >> row;


    int i,j;

    int l=1;

    for ( i = 0; i<row; i++) {
        int k=1;
        for (j = 1; j <=row-1-i; j++)
        {
            cout << " ";

        }
        for (j=1;j<=l;j++) {
            cout << k;
         k++;
        }
        cout << endl;
        l+=2;

    }
    return 0;
}