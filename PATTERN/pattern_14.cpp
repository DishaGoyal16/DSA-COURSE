 #include <iostream>
using namespace std;
int main() {
    int row, col;
    cout << "ENTER THE NUMBER OF ROWS-";
    cin >> row;


    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <=i; j++) {
            if ((i+j)%2 == 0) {
                cout<<"1";
            }
            else {
                cout<<"0";
            }

        }
        cout << endl;    }
}// disha on 10-08-2025.
//