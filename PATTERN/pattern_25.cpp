#include <iostream>
using namespace std;
int main() {
    int i,j;
    int row;
     char ch;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    for(i=1;i<=row;i++) {
        cout<<endl;
       ch='A';
        for(j=1;j<=row-i;j++) {
            cout<<"  ";
        }
        for(j=1;j<=i;j++) {
            cout<<ch<<" ";
            ch++;
        }
        ch='A';
        ch=ch+i-2;
        for(j=2;j<=i;j++) {
            cout<<ch<<" ";
            ch--;
        }
    }
}