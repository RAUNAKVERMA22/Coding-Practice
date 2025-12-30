// Program to find the sum of all possible subarrays
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = 0;

    // Each element contributes arr[i] * (i+1) * (n-i)
    for (int i = 0; i < n; i++) {
        total += arr[i] * (i + 1) * (n - i);
    }

    cout << "Sum of all subarrays = " << total;
    return 0;
}
