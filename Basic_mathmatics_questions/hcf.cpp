#include <iostream>
using namespace std;
int main() {

    int num1,num2;
    cout<<"Enter the  two number-";
    cin>>num1>>num2;
    int i;
    for (i=num1>num2?num2:num1;i>0;i--) {
        if (num1%i==0 && num2%i==0) {
            cout<<"HCF is"<<i<<endl;
            break;
        }

    }


}