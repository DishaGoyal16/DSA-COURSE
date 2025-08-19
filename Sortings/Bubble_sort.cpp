#include <iostream>
#include <algorithm>
using namespace std;
//Time complexity of Bubbble sorter -n^2;
void inputt(int arr[],int &n) {
    cout<<"Enter the no of elements-"<<endl;
    cin>>n;
    cout<<"Enter the elements of array-"<<endl;;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
}
void bubble_sort( int arr[],int n) {
    int i,j;
    int temp=0;
    for (i=0;i<n-1;i++) {
        bool swapping=false;
        for (j=0;j< n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
               swap(arr[j+1],arr[j]);
                swapping=true;
            }
            if (!swapping) {
                return ;
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
    bubble_sort(disha,k);
    outputt(disha,k);

}