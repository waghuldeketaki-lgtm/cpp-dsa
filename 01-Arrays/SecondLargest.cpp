#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "Second largest element does not exist." << endl;
    } else {
        cout << "Largest Element: " << largest << endl;
        cout << "Second Largest Element: " << secondLargest << endl;
    }

    return 0;
}