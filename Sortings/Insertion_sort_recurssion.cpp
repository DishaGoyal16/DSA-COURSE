#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void inputt(vector<int>&v,int &n) {
    int x;
    cout<<"Enter the no of Elements-";
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>x;
        v.push_back(x);
    }
}
    void sort(vector <int> &v,int n) {
        int j;
        for (j=n-2;j>=0;j--) {
            if (v[j]>v[j+1]) {
                swap(v[j+1],v[j]);}
        }
    }
    void insertion_sort(vector<int> &v,int n) {
        if (n<=0) { return;

        }
        insertion_sort(v,n-1);
        sort(v,n);
    }
    void outputt(vector<int>v) {
        for (auto it:v) {
            cout<<it<<" ";
        }
    }

int main() {
    vector<int> v1;
    int k;
    inputt(v1,k);
    insertion_sort(v1,k);
    outputt(v1);
}