#include <iostream>
using namespace std;
int main() {
    int num,rev,a=0,k=0,b=0;
    cout<<"ENTER THE NUMBER-";
    cin>>num;
    while (num>0) {
        k=num%2;
        b=b*10+k;
        num/=2;
    }
    while (b>0) {
        a=b%10;
        rev=rev*10+a;
        b/=10;
    }
    cout<<"DECIMAL TO BINARY CONVERSION IS-"<<rev;
}