#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Number of Rows: ";
    cin >> row;

    int i,j;
 int k;
    k=1;


    for ( i = 1; i<=row; i++) {
        k=i-1;
        for (j = 1; j <=row-i; j++)
        {
            cout << "  ";

        }
        for (j=1;j<=i;j++) {
            cout <<j<<" ";

        }
        for (j=2;j<=i;j++) {
            cout<<k<<" ";
            k--;
        }
        cout << endl;

        }


    return 0;


    }
