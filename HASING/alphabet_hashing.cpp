#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the string-";
    string s1;
    getline(cin,s1);

    int i;
    int hash[26]={0};
    for (i=0;i<s1.size();i++) {
        hash[s1[i]-'a']+=1;

    }
    int q;
    cout<<"How many alphabets you want to search for-";
    cin>>q;
    while (q>0) {
        cout<<"Enter the alphabets you want to search for-"<<endl;;
        char ch;
        cin>>ch;
        cout<<"NUMBER OF TIMES "<<ch<<" appears-"<<hash[ch-'a']<<endl;
        q--;
    }
    return 0;

}