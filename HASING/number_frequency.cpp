#include <iostream>
using namespace std;
//Array size can be 10^7 inside main function and upto 10^8 outside main function that is globally
int main() {
    int n;
cout<<"Enter the size of array-";
    cin>>n;
    int arr[n];
    int i;
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    int hash[13]={0};
    for (i=0;i<n;i++) {
        hash[arr[i]]+=1;
    }
     int q;
    cout<<"How many numbers you want to search for-";
    cin>>q;
    while (q>0) {
        cout<<"Enter the number you want to search for-"<<endl;;
        int num;
        cin>>num;
        cout<<"NUMBER OF TIMES "<<num<<" appears-"<<hash[num]<<endl;
        q--;
    }
    return 0;
}