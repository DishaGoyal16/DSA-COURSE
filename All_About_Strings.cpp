#include <iostream>
#include <string>
using namespace std;
int main() {
    //These are the ways in which we initialize strings
    string s1="Helllo";
    string s2("dishaaaa");

    //STRING CONCATENATE
    string s3=s1+" "+s2;
    cout<<s3<<endl;;
    //Copy the string
    string s4=s1;
    cout<<s4;
    //INPUT AND OUTPUT WITH STRING TILL NEW LINE
    string s5;
    cout<<endl<<"ENTER STIRNG-";
    getline(cin,s5);
    cout<<endl<<s5<<endl;
//In this way also we can access the string also
    for(int i=0; i<s4.length(); i++) {
        cout << s4[i] ;
    }
    cout<<endl;
    //this is easier way to print
    for (char ch:s4) {
        cout<<ch;
    }
    cout<<endl;
    //comparison
    if (s1==s2) {
        cout<<"equal";
    }
    else {
        cout<<"not eqaul";
    }

}
