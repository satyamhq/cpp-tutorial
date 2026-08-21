#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 12, 21, 45, 67};
    int n = 5;
    int pos = 2;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}