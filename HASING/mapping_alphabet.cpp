#include <iostream>
#include <map>
using namespace std;
int main() {
     cout<<"Enter the string-";
     string s1;
     getline(cin,s1);
     map<char,int>m;
     for (int i=0;i<s1.size();i++) {
          m[s1[i]-'a']++;
     }

     int q;
     cout<<"How many numbers do you want to search-";
     cin>>q;
     while (q>0) {
          char ch;
          cout<<"Enter the character-";
          cin>>ch;
          cout<<ch<<" is repeated "<<m[ch-'a']<<" times"<<endl;

     }
     return 0;
}