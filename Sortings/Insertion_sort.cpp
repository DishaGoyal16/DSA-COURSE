#include <iostream>
#include<algorithm>
using namespace std;
void inputt(int arr[],int &n) {
    cout<<"Enter the no of elements-"<<endl;
    cin>>n;
    cout<<"Enter the elements of array-"<<endl;;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
}void insertion_sort(int arr[],int n) {
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j=i+1;j>0;j--) {
            if (arr[j-1]>arr[j]) {
                swap(arr[j-1],arr[j]);
            }
            else {
                break;
            }
        }

    }
}
void outputt( int arr[],int n)
{ if (n<=0) {
    return ;
}
    outputt(arr,n-1);
    cout<<arr[n-1]<<" ";

}
int main() {
    int disha[100];
    int k;
    inputt(disha,k);
    insertion_sort(disha,k);
    outputt(disha,k);
}