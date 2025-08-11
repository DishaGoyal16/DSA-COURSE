#include <iostream>
using namespace std;
int main() {
    int i,j,row;
    int c;
    cout<<"Enter Number Of Each Row : ";
    cin>>row;
    c=(row+1)/2;;
    for(i=1;i<=row;i++) {
        cout<<endl;
        if (i<=c) {
            for (j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else {
            for (j=1;j<=row+1-i;j++) {
                cout<<"*";
            }
        }

    }
}
