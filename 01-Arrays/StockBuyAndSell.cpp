#include <iostream>
using namespace std;

int main() {

    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minPrice = arr[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] < minPrice) {
            minPrice = arr[i];
        }

        int profit = arr[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}