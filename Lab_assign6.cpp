#include <iostream>
using namespace std;

int main() {
    int arr[10], value;
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> value;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == value) {
            cout << "Value found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Value not found in array." << endl;

    return 0;
}
