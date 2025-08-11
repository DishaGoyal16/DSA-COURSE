#include <iostream>
using namespace std;
int main() {
    int i,j,row;
    cout<<"ENTER THE ROWS :-";
    cin>>row;
    int c;
     int l=-2;
    c=row/2;
    for(i=1;i<=row;i++) {
        cout<<endl;

        if (i<=c) {
            l=l+2;
            for(j=1;j<=c+1-i;j++) {
                cout<<"*";
            }
            for(j=1;j<=l;j++) {
                cout<<" ";
            }
            for(j=1;j<=c+1-i;j++) {
                cout<<"*";
            }

        }

        else {

            for(j=1;j<=i-c;j++) {
                 cout<<"*";
            }
            for (j=1;j<=l;j++) {
                cout<<" ";
            }
            for(j=1;j<=i-c;j++) {
                cout<<"*";
            }

            l=l-2;
        }
    }

}