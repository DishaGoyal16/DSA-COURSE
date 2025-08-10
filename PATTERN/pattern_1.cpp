//pattern 1//
#include <iostream>
using namespace std;
int main() {
    int row,col;

    cout<<"ENTER THE NUMBER OF ROWS-";
    cin>>row;
    cout<<"ENTER THE NUMBER OF COLUMNS-";
    cin>>col;
    int i,j;
    for (i=0;i<row;i++) {
        cout<<endl;
        for ( j=0;j<col;j++) {
            cout<<"*";
            cout<<" ";
        }
    }
}

