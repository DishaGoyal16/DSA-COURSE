#include <iostream>
#include <vector>
using namespace std;
void  create(vector<int>&v,int &n) {
    int i;
    cout<<"Enter the number of elements in array-";
    cin>>n;
    int x;
    for (i=0;i<n;i++) {
        cin>>x;
        v.push_back(x);

    }
}
void display(vector<int>v) {
    for (auto itt:v) {
        cout<<itt<<" ";
    }
}
void insertion(vector <int>&v) {
    int num,pos;
    int i;
    cout<<"Enter the number you want to insert-";
    cin>>num;
    cout<<"Enter the position where you want to insert-";
    cin>>pos;
   v.insert(v.begin()+pos,num);
}
void delElement(vector<int>&v) {
    int i;
    cout<<"Enter the position you want to delete";
    int pos;
    cin>>pos;
    v.erase(v.begin()+pos);
}
void linear_search(vector<int>&v) {
    cout<<"Enter the number you  want to search for-";
    int p;
    int i;
    cin >>p;
    int pos;
    bool foundd=false;
    for (int i=0;i<v.size();i++) {
        if (p==v[i]){
            foundd=true;
            pos=i;
            break;
        }
    }
    if (!foundd) { cout<<"Element not found";
    }
    else {
        cout<<"Element found at index at-"<<pos;
    }
}
int main() {
    vector<int> v1;
    int k;
    int choice;

    while (choice!=6){
        cout << "\nEnter-1-CREATE\n2.DISPLAY\n3.INSERTION\n4.DELETION\n5.LINEAR SEARCH\n6.EXIT\n";
        cin >> choice;

        switch (choice) {
            case 1: create(v1, k); break;
            case 2: display(v1); break;
            case 3: insertion(v1); break;
            case 4: delElement(v1); break;
            case 5: linear_search(v1); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "You entered wrong number\n";
        }
    }
}