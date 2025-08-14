#include<iostream>
using namespace std;
int arr[100];
int n = 0;

void create() {
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }
}

void display() {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {

    int pos;
    int num;

    cout << "Enter the position: ";
    cin >> pos;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement() {

    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void linearsearch() {

    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << "The position of the targeted element: " << i + 1 << endl;
        }
    }
}

int main() {
    int k ;
        cout << "ENTER YOUR CHOICE: ";
        cin >> k;
        switch (k) {
            case 1: create();
                break;
            case 2: display();
                break;
            case 3: linearsearch();
                break;
            case 4: deleteElement();
                break;
            case 5: insert();
                break;
            default:cout<<"EXIT";
        }

    return 0;
}
