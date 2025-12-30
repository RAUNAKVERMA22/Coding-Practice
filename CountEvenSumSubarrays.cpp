// Program to count subarrays with even sum
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even = 1, odd = 0, sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum % 2 == 0) {
            count += even;
            even++;
        } else {
            count += odd;
            odd++;
        }
    }

    cout << "Number of even sum subarrays = " << count;
    return 0;
}
