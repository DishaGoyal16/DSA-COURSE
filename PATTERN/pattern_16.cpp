#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int i,j,k;
    k=4;


    for ( i = 0; i< rows; i++) {

        for ( j = 1; j<= cols-k-i; j++) {
            cout << " ";
        }
        for (j=0;j<k;j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
