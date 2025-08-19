#include <iostream>
#include <stack>
using namespace std;
//SStack is based on last in first out
int main() {
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    //In this way access element ,jis order mai input hogi uske opposite mai output hoga
    while (!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    //we can swap two stack also
    stack <int> s2;
    s2.swap(s);
}