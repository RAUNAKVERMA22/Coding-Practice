// Program to find longest subarray with sum equal to K
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;

    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == k)
            maxLen = i + 1;

        if (mp.find(sum) == mp.end())
            mp[sum] = i;

        if (mp.find(sum - k) != mp.end())
            maxLen = max(maxLen, i - mp[sum - k]);
    }

    cout << "Longest subarray length with sum " << k << " = " << maxLen;
    return 0;
}
