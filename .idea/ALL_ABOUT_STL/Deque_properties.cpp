#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> d;
    d={1,2,3,4,5};
    //It is dynamic memory allocation and  we can accessvalue randomly
    cout<<d[3]<<endl;
    //We cannot access this in list
}