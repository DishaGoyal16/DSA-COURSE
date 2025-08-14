#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    pair<string,int> p;
    p={"disha",1};
    cout<<p.first<<endl;
    //To insert multiple pair include vector
    vector<pair<int,int>> v;
    v={{1,2},{3,4},{5,6}};
    //This is to access particular element
    cout<<v[2].first<<endl;
    //Yaha pe second first likhna pdega;
    //Adding elements;
    v.push_back({7,8});
    v.emplace_back(9,10);
for (auto it=v.begin();it!=v.end();it++) {
    cout<<(*it).first<<" " <<(*it).second<<endl;
}

return 0;

}