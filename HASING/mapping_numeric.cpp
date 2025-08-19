#include <iostream>
#include<map>
using namespace std;
//mappppingggggggg
//It is a dynamic memory allocation
//size set nhi krna pdta
//stores all types of values as it it is not index it is just key
//Time complexity-N
int main() {
    int n;
    map<int,int> m;
    cout<<"Enter the size of array-"<<endl;
    cin>>n;
    int arr[n];
    int i;
    for (i=0;i<n;i++) {
         cin>>arr[i];
        m[arr[i]]++;
    }int q;
 cout<<"How many numbers do you want to search-";
     cin>>q;
    while (q>0) {
        int num;
        cout<<"Enter the number-";
        cin>>num;
        cout<<num<<" is repeated "<<m[num]<<" times"<<endl;

    }
return 0;
}