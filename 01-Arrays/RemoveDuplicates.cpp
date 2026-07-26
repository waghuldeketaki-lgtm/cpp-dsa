#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;

    for (int j = 1; j < n; j++) {

        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }

    }

    cout << "Array after removing duplicates:\n";

    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }

    cout << "\n\nTotal Unique Elements: " << i + 1 << endl;

    return 0;
}