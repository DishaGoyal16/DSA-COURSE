#include <iostream>
#include <list>
using namespace std;
int main() {
    //It is similar vector,Just take a Glance here
    list<int> l;
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    l.push_front(1);
    //all other functions like  size,erase,clear,begin,end,rbegin,rend,insert,front,end
    for (auto it=l.begin(); it!=l.end(); it++) {
        cout<<*it<<" ";
    }


}
