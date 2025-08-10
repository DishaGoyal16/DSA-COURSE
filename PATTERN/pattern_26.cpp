#include <iostream>
using namespace std;
int main() {
    int i,j;
    int row,col;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    int k=0;
    for (i=1;i<=row*2-1;i++) {
         if (i<=row) {
             k++;
             cout<<k;

         }
        else {
            k--;
            cout<<k;

        }
    }
    for (i=1;i<row;i++) {
        cout<<endl;
        for (j=1;j<=4-i;j++) {
            cout<<j;
        }
        for (j=2;j<=i;j++) {
            cout<<" ";
        }
        for (j=1;j<=i;j++) {
            cout<<" ";
        }
        for (j=4-i;j>=1;j--) {
            cout<<j;
        }
    }
}
