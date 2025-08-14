#include <iostream>
using namespace std;
void tridaigonal(int *arr,int n) {
    cout<<"ENTER THE ROWS-";
    cin>>endl;
    cout<<"ENTER THE ElEments-";
    int i,j,k;
    for (i=0;i<n;i++) {
        cin>>*(arr+i);
    }
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i-j==1||i-j==n-1||i-j==0) {
                cout<<arr[k];k++;
            }
        }
    }

}
int main() {
    int i,n,j;

}