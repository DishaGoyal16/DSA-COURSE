#include <iostream>
using namespace std;
int main() {
    int row;
    int i,j;
    int l=-1;
    cout<<"Enter Number of row: ";
    cin>>row;
   int k;
   k=(row+1)/2;
    for (i=1;i<=row;i++) {

         cout<<endl;
        if (i<=(row+1)/2) {
            l+=2;
            k--;

            for(j=1;j<=k;j++) {
                cout<<" ";
            }
            for (j=1;j<=l;j++) {
                cout<<"*";

            }

        }
        else {
            l-=2;
            k++;
            for(j=1;j<=k;j++) {
                cout<<" ";
            }
            for (j=1;j<=l;j++) {
                cout<<"*";
            }
        }

    }
}