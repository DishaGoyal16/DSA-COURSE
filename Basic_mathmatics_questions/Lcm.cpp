#include <iostream>
using namespace std;
int main() {

    int num1,num2;
    cout<<"Enter the  two number-";
    cin>>num1>>num2;
    int i;
    for (i=num1>num2?num1:num2;i<=num1*num2;i++) {
        if (i%num1==0 && i%num2==0) {
            cout<<"LCM is"<<i<<endl;
            break;
        }

    }


}