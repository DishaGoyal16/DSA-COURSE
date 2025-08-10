//
// Created by disha on 10-08-2025.
//
#include <iostream>
using namespace std;
int main() {

    int row,col;
    cout<<"ENTER NO OF ROWs";
    cin>>row;
    cout<<"ENTER NO OF COLUMNS";
    cin>>col;
    int a=65;
    char ch=char(a);
    int i,j;
    for (i=0;i<row;i++) {
        cout<<endl;
        for (j=0;j<col;j++) {
            cout<<ch;
            ch++;
        }
    }
}