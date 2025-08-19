#include <iostream>
using namespace std;
void printt(int n) {
    if (n==0) {
        return ;
    }
    cout<<n<<" ";
    printt(n-1);
}
void seedhaprint( int n) {
    if (n==0) {
        return ;
    }
    seedhaprint(n-1);
    cout<<n<<" ";
}
int main() {
    printt(6);
    cout<<endl;
    seedhaprint(6);
    return 0;
}