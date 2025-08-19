#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int num;
    cout<<"Enter the  two number-";
    cin>>num;
    int i;
    cout<<"COMMON DIVISORS ARE-"<<endl;
    for (i=1;i<=num;i++) {
         if (num%i==0) {
             cout<<i<<" ";
         }
    }





}