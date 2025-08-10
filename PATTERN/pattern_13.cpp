#include <iostream>
using namespace std;
int main() {
    int row, col;
    cout << "ENTER THE NUMBER OF ROWS-";
    cin >> row;

 int k=1;
    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <=i; j++) {
            cout<<k<<" ";
            k++;

        }
        cout << endl;    }
}//
// Created by disha on 10-08-2025.
//