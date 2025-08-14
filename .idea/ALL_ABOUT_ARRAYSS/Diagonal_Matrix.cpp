#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of daigonal elements -";
    cin>>n;
    int arr[n];
    int i,j;
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (i=0;i<n;i++) {
        cout<<endl;
        for (j=0;j<n;j++) {
            if (i==j) {
                cout<<arr[i]<<" ";
            }
            else {
                cout<<"0"<<" ";
            }
        }
    }
    return 0;
}