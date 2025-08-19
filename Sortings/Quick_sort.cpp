#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void inputt( vector<int>&v,int &n) {
    cout<<"Enter the number of elements-";
    cin>>n;
    int x;
    for (int i=0;i<n;i++) {
        cin>>x;
        v.push_back(x);
    }
}
    int pivot(vector<int>&v,int low,int high) {
        int i=low; int j=0;

        for (j=low;j<high;j++) {
            if (v[high]>v[j]) {
                swap(v[i],v[j]);
                i++;
            }

        }
        swap(v[high],v[i]);
        return i;
    }

    void quick_sort(vector<int>&v,int low,int high){
        if (low>=high) {
            return ;
        }
        int piv= pivot( v, low,high);
    quick_sort(v,low,piv-1);
    quick_sort(v,piv+1,high);
    }


void outputt(vector <int> v) {
    for (  auto it:v) {
        cout<<it<<" ";
    }
}

int main() {
    vector<int>v1;
    int k;
    inputt(v1,k);
    quick_sort(v1,0,k-1);
    outputt(v1);
    return 0;
}