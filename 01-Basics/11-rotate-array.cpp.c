// Given an array rotate to the right by k positions

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    k = k % n;

    // Rotate right by k positions
    for (int r = 0; r < k; r++) {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}