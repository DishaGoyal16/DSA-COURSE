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
}
void selection_sort(int arr[], int n) {

    int i,j;
    for (i=0;i<n-1;i++) {
        int minindex=i;

        for (j=i+1;j<n;j++) {
            if (arr[j]<arr[minindex]) {
               minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
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
    selection_sort(disha,k);
    outputt(disha,k);

}