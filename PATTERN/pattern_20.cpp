//
// Created by disha on 10-08-2025.
//
#include <iostream>
using namespace std;

int main() {
    int row, col;
    int k=1;
    cout << "Enter Number of Rows: ";
    cin >> row;


    int i,j;

    int l=1;

    for ( i = 0; i<row; i++) {
        for (j = 1; j <=row-1-i; j++)
        {
            cout << " ";

        }
        for (j=1;j<=l;j++)
            if (row%2==0)
        {
                if ((i+k)%2==0) {
                    cout<<"2";

                }
                else {
                    cout<<"1";
                }
                k++;
        }
        else {

            if ((i+k)%2==0) {
                cout<<"1";

            }
            else {
                cout<<"2";
            }
            k++;
        }
        cout << endl;
        l+=2;

    }
    return 0;
}