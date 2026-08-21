#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {3, 12, 21, 45, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 21;

    int result = binarySearch(arr, n, key);

    if(result != -1){
        cout << "Element found at index: " << result << endl;

        // Deletion
        for(int i = result; i < n - 1; i++){
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "After deletion: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
    else{
        cout << "Element not found";
    }

    return 0;
}