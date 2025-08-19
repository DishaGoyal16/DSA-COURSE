#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num;
    cout<<"ENTER THE NUMBER-";
    cin>>num;
    int k=0;
    int x=0;
    int digit=0;
    int a=num;
  int i=0;
    while (num>0) {
        k=num%10;
        x += pow(2, i) * k;
        num/=10;
    i++;
    }
    cout<<"BINARY TO DECIMAL CONVERSION IS-"<<x;
}