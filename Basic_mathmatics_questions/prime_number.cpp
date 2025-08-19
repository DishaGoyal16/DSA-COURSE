#include <iostream>
#include <math.h>
using namespace std;
int main() {
int num;
    cout<<"Enter the number-";
    cin>>num;
    int i;
    bool flag=true;
    for (i=2;i<num;i++) {
        if (num%i==0) {
            flag=false;
            break;
        }
    }
if (flag) {
    cout<<"IT IS A PRIME NUMBER";
}
    else {
        cout<<"IT IS NOT A PRIME NUMBER";
    }
return 0;
}