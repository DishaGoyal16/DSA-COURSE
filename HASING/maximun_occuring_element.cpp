#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    map<int,int>m;
    cout<<"Enter the size of array-";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements-"<<endl;
    int i;
    for (i=0;i<n;i++) {
        cin>>arr[i];
        m[arr[i]]+=1;
    }
    int max=0;
    int num=0;
    for (auto i:m)
    {
        if (i.second>max) {
             max=i.second;
            num=i.first;
        }

    }
    cout<<"Maximum occuring element is "<<num<<" and its frequency is- "<<max;
return 0;
}
