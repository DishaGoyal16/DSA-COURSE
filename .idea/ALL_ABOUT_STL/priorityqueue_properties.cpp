#include <iostream>
#include <queue>
using namespace std;
int main() {
   priority_queue<int>d;
   d.push(10);
   d.push(9);
   d.push(12);
   d.push(100);
   while (!d.empty()) {
      cout<<d.top()<<" ";
      d.pop();
   }
   //if we want to arrange from smaller to larger value
   priority_queue<int ,vector<int>,greater<int>>q;
   cout<<endl;
   q.push(10);
   q.push(9);
   q.push(12);
   q.push(100);
   while (!q.empty()) {
      cout<<q.top()<<" ";
      q.pop();
   }





}
