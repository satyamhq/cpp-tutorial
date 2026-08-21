// A sorted array has been rotated at an unknown pivot point. 
// Given the rotated array and a target key, find the index of the target element 
// using an algorithm with O(log n) time complexity.

#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Target found
        if (arr[mid] == key) {
            return mid;
        }

        // Left half is sorted
        if (arr[left] <= arr[mid]) {

            // Check if key lies in the left sorted half
            if (arr[left] <= key && key < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Right half is sorted
        else {

            // Check if key lies in the right sorted half
            if (arr[mid] < key && key <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int key = 0;

    int index = searchRotatedArray(arr, n, key);

    cout << "Index of " << key << ": " << index << endl;

    return 0;
}