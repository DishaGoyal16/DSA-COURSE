#include <iostream>
using namespace std;

int main() {
    int n, num;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> num;
    int start = 0, end = n - 1;
    int found = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == num) {
            cout << "Element found at position " << mid + 1;
            found = 1;
            break;
        }
        else if (arr[mid] < num) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return 0;
}
