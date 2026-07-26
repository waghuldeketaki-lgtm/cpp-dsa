#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 2;

    k = k % n;

    // Reverse first k elements
    reverse(arr, arr + k);

    // Reverse remaining elements
    reverse(arr + k, arr + n);

    // Reverse the entire array
    reverse(arr, arr + n);

    cout << "Array after left rotation by " << k << " places:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}