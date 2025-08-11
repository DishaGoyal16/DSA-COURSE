#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int start, end;
    char temp;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    start = 0;
    end = strlen(str) - 1;


    while (start < end) {

        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str;

    return 0;
}
