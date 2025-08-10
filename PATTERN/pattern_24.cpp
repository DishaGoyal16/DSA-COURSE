#include <iostream>
using namespace std;
int main() { int row;
    cout << "Enter Number Of Rows: ";
    cin>>row;
    int i,j;
    char k;
    k='A';
    for (j=1;j<=row*2-1;j++) {

        cout<<k;
        k++;

    }
    for (i=1;i<=row;i++) {
        cout<<endl;
        k='A';
        for (j=1;j<=row-i;j++) {
            cout<<k;
            k++;
        }
        for (j=2;j<=i;j++) {
            cout<<" ";
            k++;
        }
        for (j=1;j<=i;j++) {
            cout<<" ";
            k++;
        }
        for (j=1;j<=row-i;j++) {
            cout<<k;
            k++;

        }
    }

}