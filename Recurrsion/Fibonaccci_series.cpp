#include <iostream>
using namespace std;
int fibbb( int n) {
    if (n==1||n==0) {
        return n;
    }
    return fibbb(n-1)+fibbb(n-2);
}
int main() {
    int c= fibbb(7);
    cout<<c;
    return 0;

}


