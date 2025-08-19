#include <iostream>
#include <vector>
using namespace std;

 void inputt(vector <int>&v ,int &n) {
  cout<<"Enter the number of elements-";
  cin>>n;
  int i;
  int x;
  cout<<"Enter the elements-";
for (i=0;i<n;i++) {
 cin>>x;
 v.push_back(x);
}
 }
void merge( vector<int>&v, int mid,int low,int high) {
 int left=low;
  int right=mid+1;
  vector<int>temp;
  while (left<=mid && right<=high) {
   if (v[left]>v[right]) {
    temp.push_back(v[right]);
    right++;
   }
  else {
    temp.push_back(v[left]);
    left++;
       }
  }
  while (left<=mid) {
   temp.push_back(v[left]);
   left++;
  }
  while (right<=high) {
   temp.push_back(v[right]);
   right++;
  }
  for (int i = 0; i < temp.size(); i++) {
   v[low] = temp[i];
   low++;
  }

 }
void partition( vector <int> &v, int low, int high)
 { if (low>=high) {
   return ;
 }
  int mid;
  mid=(high+low)/2;
  partition(v,low,mid);
  partition(v,mid+1,high);
  merge(v,mid,low,high);

  }
void outputt(vector<int>v) {
    for (auto itt:v) {
     cout<<itt<<" ";
    }
 }


int main() {
  vector<int> v1;
  int n;
  inputt(v1,n);
  partition(v1,0,n-1);
  outputt(v1);
  return 0;
}

