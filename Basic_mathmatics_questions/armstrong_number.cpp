#include <iostream>
#include <math.h>
using namespace std;
int main() {
 int digit=0;
    int num;
    cout<<"Enter the  two number-";
    cin>>num;
    int a=num,k=0,arm=0;
    int temp=num;
    while (temp>0) {
        digit++;
        temp/=10;
    }
    while (a>0) {
         k=a%10;
        arm+=pow(k,digit);
        a/=10;
    }
    if (arm==num) {
        cout<<"This is a armstrong number";
    }
    else {
        cout<<"This is not a armstrong number";
    }
    return 0;
    }


