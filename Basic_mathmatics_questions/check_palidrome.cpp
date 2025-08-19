#include <iostream>
using namespace std;
int main() {

    int num,a,x=0,rev=0;
    cout<<"Enter the number-";
    cin>>num;
    a=num;
    while (a>0) {
        x=a%10;
        rev=rev*10+x;
        a/=10;
    }
    if (num==rev) {
        cout<<"It is a palindrome";
    }
    else {
        cout<<"It is not a palindrome";
    }

    return 0;
}