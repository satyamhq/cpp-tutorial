// An array stores multiple values of the same data type in contiguous memory.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Access elements
    cout << arr[0] << endl;  // 10
    cout << arr[2] << endl;  // 30

    // Print all elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}