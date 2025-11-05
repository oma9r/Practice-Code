#include <iostream>
using namespace std;

int main() {
    int arr[6]; // since we have 6 numbers
    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> arr[i]; // read each number and store it in the array
    }

    // Display them to check
    cout << "You entered: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
