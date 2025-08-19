#include <iostream>
using namespace std;
int main() {
    int count=0;
    int num,a;
    cout<<"Enter the number-";
    cin>>num;
    a=num;
    if (a==0) {
        count=1;
    }
    while (a>0) {
        count++;
        a/=10;

    }
    cout<<count<<endl;
}
