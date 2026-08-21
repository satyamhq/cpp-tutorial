// Count, Then Total
#include <iostream>
using namespace std;

int sum(int arr[], int n){
    int total = 0;  // 1 op
    for(int i = 0; i < n; i++){   // n iteration
        total += arr[i];  // 1 op each
    }
    return total;  // 1 op
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Total: " << sum(arr, n) << endl;
    return 0;
}