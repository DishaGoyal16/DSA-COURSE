#include<iostream>
using namespace std;
int arr[100];
int size = 0;

void create() {
    cout << "Enter the number of elements: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void display() {
    if (size == 0) {
        cout << "This is not valid";
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    if (size == 0) {
        cout << "Array is not created";
        return;
    }
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
    size++;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement() {
    if (size == 0) {
        cout << "Array is not created";
        return;
    }
    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void linearsearch() {
    if (size == 0) {
        cout << "Array is not created";
        return;
    }
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            cout << "The position of the targeted element: " << i + 1 << endl;
        }
    }
}

int main() {
    int k = 0;
    while (k != 6) {
        cout << "Enter the choices [1 to 5]: ";
        cin >> k;
        switch (k) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: linearsearch(); break;
            case 4: deleteElement(); break;
            case 5: insert(); break;
        }
    }
    return 0;
}
