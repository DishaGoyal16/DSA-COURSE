#include <iostream>
using namespace std;
void reverse(int arr[],int n) {
    if (n==0) {
        return ;
    }
    cout<<arr[n-1]<<" ";
    reverse( arr,n-1);

}
int main() {
    int array[]={1,2,3,4,5};
    reverse(array,5);
    return 0;

}