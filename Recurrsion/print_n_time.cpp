#include <iostream>
using namespace std;
void display( int i, int n) {
    if (i>n) {
        return ;
    }
    cout<<"disha"<<" ";
   display(i+1,n);
}
int main() {
    display(1,4);

}