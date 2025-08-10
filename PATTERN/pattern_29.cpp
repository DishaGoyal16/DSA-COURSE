#include <iostream>
using namespace std;
int main() {
    int i,j,a,b,row;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    int min=0;
    int c;
    c=row+1;
    for (i=1;i<=row;i++) {
        cout<<endl;
        a=i;
        if (a<=c/2) {
            a=i;
        }
        else {
            a=c-i;
        }
        for (j=1;j<=row;j++){
            b=j;
            if (b<=c/2) {
                b=j;
            }
            else {
                b=c-j;
            }
            if (a>b) {
                min=b;
            }
            else{ min=a;}
            int max;
            max=c/2+1-min;
            cout<<max;
        }

    }

}