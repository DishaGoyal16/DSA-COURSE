#include <iostream>
using namespace std;
void taking_input(string &s1) {
 getline(cin,s1);
}
void change_lowercase(string &s1,int n) {
 if (n<=0) {
  return ;
 }
 if (s1[n-1]>='A'&& s1[n-1]<='Z') {
  s1[n-1]+=32;
 }
 change_lowercase(s1,n-1);
}
void remove_space(string &s1,int n) {
 if (n<=0) {
  return ;
 }
 if (!(s1[n-1]>='A'&& s1[n-1]<='Z'||s1[n-1]>='a'&& s1[n-1]<='z'||s1[n-1]>='1' && s1[n-1]<='9')) {
  s1.erase(n-1,1) ;
 }
 remove_space(s1,n-1);
}
bool check( string &s1, int start, int end) {
 if (start>=end) {
  return true;
 }
 if (s1[start]!=s1[end]) {
  return false;
 }
 return check(s1,start+1,end-1);
}

int main() {
 string disha;
taking_input(disha);
 change_lowercase(disha,disha.size());
 remove_space(disha,disha.size());
  if (check(disha,0,disha.size()-1)) {
   cout<<"This is a palidrone";
  }
 else {
  cout<<"This is not a palindrone";
 }
   return 0;
}
