// Program to find minimum subarray sum
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, -4, 2, -3, -1, 7, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int curr = arr[0], minSum = arr[0];

    for (int i = 1; i < n; i++) {
        curr = min(arr[i], curr + arr[i]);
        minSum = min(minSum, curr);
    }

    cout << "Minimum subarray sum = " << minSum;
    return 0;
}
