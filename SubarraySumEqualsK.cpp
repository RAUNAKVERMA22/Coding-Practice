// Program to count subarrays with sum equal to K
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (mp.find(sum - k) != mp.end())
            count += mp[sum - k];
        mp[sum]++;
    }

    cout << "Number of subarrays with sum " << k << " = " << count;
    return 0;
}
