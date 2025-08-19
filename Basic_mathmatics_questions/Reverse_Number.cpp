#include <iostream>
using namespace std;
int main() {
    int count=0;
    int num,a,x=0,rev=0;
    cout<<"Enter the number-";
    cin>>num;
    a=num;
    if (a==0) {
        cout<<"0";
    }
    while (a>0) {
        x=a%10;
         rev=rev*10+x;
        a/=10;

    }
    cout<<"REVERSE OF A NUMBER -"<<rev<<endl;
}

