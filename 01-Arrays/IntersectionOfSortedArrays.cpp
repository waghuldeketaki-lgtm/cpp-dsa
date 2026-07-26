#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 3, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result;

    int i = 0, j = 0;

    while (i < n1 && j < n2) {

        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    cout << "Intersection of Arrays: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}