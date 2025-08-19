#include <iostream>
#include <map>
#include <unordered_map>
//////////////iskeeeeeeeee andrrrrr begin, end useeeee krrrrrrrrr skteeeeeee haiiiiii//
//THere are three types of mapping
//map---time complexity- logn
//order of keys mai aarange hota hai
//unordered mapping---time complexity -1
//unodered mapping --- Koi bhi random order mai arrange hoga
//multiple mapping---- unique key hona zaruri nhi hai
using namespace std;
int main() {
    map<string,int>m;
    m.emplace("DISHA",100);
    m.emplace("URVI",100);
    m.emplace("NEHA",100);
    m.emplace("SANJAY",100);
    for (auto i=m.begin();i!=m.end();i++) {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    //cout the no of keys;
    cout<<m.count("DISHA")<<endl;
    //Count the no of items
    cout<<m["DISHA"]<<endl;
    unordered_map<string,int>m1;
    m1.emplace("DISHA",100);
    m1.emplace("URVI",100);
    m1.emplace("NEHA",100);
    m1.emplace("SANJAY",100);
    for (auto i=m1.begin();i!=m1.end();i++) {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}