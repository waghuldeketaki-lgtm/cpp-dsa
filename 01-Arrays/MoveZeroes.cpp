#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 4, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    cout << "Array after moving zeroes: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}