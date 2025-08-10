 #include <iostream>
using namespace std;
int main() {
    int row, col;
    cout << "ENTER THE NUMBER OF ROWS-";
    cin >> row;

    int j;

    for (int i = 1; i <=row; i++) {
 cout<<endl;
        for (int j = 1; j <=row-i; j++) {

                cout<<" ";
            }
        for (j=1;j<=i;j++) {
            cout<<"*";
        }

        }
         }
//
// Created by disha on 10-08-2025.
//