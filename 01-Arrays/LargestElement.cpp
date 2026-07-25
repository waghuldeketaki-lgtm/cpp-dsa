#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {12, 45, 7, 89, 34, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest Element: " << findLargest(arr, size) << endl;

    return 0;
}