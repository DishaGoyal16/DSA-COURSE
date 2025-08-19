#include <iostream>
#include <queue>
using namespace std;
//It is based on first in frst out
int main() {
     queue< int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     while (!q.empty()) {
           cout<<q.front()<<" ";
         q.pop();
     }

}
