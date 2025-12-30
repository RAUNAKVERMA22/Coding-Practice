// Program to find maximum subarray sum (Kadane's Algorithm)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int curr = arr[0], maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        curr = max(arr[i], curr + arr[i]);
        maxSum = max(maxSum, curr);
    }

    cout << "Maximum subarray sum = " << maxSum;
    return 0;
}
