#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    int maxLength = 0;

    for (int i = 0; i < n; i++) {

        int sum = 0;

        for (int j = i; j < n; j++) {

            sum += arr[j];

            if (sum == k) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    cout << "Longest Subarray Length: " << maxLength << endl;

    return 0;
}