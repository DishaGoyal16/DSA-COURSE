#include <iostream>
#include <vector>
using namespace std;
int main() {
    // THIS IS WAY IN WHICH WE INCLUDE VECTOR
    vector <int> vect1;
    //This is way in which we add values to vector
    vect1.push_back(1);
    vect1.push_back(2);
    vect1.push_back(3);
    vect1.push_back(4);

    cout << vect1.size() << endl;

    //This is the way in which we access element of vector
    cout<<vect1[2]<<endl;;

    //This is way in which we remove the element of array
    vect1.pop_back();

    cout << vect1.size() << endl;
    //For accessing 1st element
    cout<<vect1.front()<<endl;
    //For accessing last element
    cout<<vect1.back()<<endl;



    //This is the way in which we give values to vectors
    vector<int>vect2={1,2,3,4,5};
    vector <int> vect3(10,10);
    int i;
    for (i=0;i<vect2.size();i++) {
        cout<<vect2[i]<<" ";
    }

    cout<<endl;
    for (i=0;i<vect3.size();i++) {
        cout<<vect3[i]<<" ";
    }
    cout<<endl;
    //This is the way in which we delete the index of vector
    vect2.erase(vect2.begin());
    //Range of nubers can also be deleted using erase function as
    vect3.erase(vect3.begin()+2,vect3.begin()+7);
   // This the way in which we add element to vector at desired position
   vect2.insert(vect2.begin()+2,123);
    //Iterators syntax
    //iterators-is like pointers ,access value like pointer does
    //syntax 1-
    vector<int>::iterator iT;  // semicolon here
    for (iT = vect2.begin(); iT != vect2.end(); iT++) {
        cout << *(iT) << " ";
    }
    cout << endl;
    //syntax-2 -WRITE AUTO KEYWORD JUST ONLYY
    for (auto iTT=vect2.rbegin();iTT!=vect2.rend();iTT++) {
        cout<<*(iTT)<<" ";
    }




}