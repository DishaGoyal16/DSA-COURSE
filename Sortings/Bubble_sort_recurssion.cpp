#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void inputt(vector<int>&v,int &n) {
    cout<<"Enter the number of elements-";
    cin>>n;
    int x;
    for (int i=0;i<n;i++) {
        cin>>x;
        v.push_back(x);
    }
}
void bubble_sort( vector<int>&v,int n) {
    if (n==1) {
        return;
    }
    for (int j=0;j<n-1;j++) {
        if (v[j]>v[j+1]) {
            swap(v[j+1],v[j]);
        }
    }
    bubble_sort(v,n-1);
}
void outputt(vector<int>v) {
     for (auto i:v) {
         cout<<i<<" ";
     }
}

int main() {
    vector<int>v1;
    int k;
    inputt(v1,k);
    bubble_sort(v1,k);
    outputt(v1);
    return 0;

}

