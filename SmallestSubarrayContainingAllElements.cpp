// Smallest subarray containing all array elements at least once
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1};
    int n = 5;

    unordered_set<int> unique(arr, arr + n);
    unordered_map<int,int> freq;

    int start = 0, minLen = n + 1, count = 0;

    for (int end = 0; end < n; end++) {
        freq[arr[end]]++;
        if (freq[arr[end]] == 1)
            count++;

        while (count == unique.size()) {
            minLen = min(minLen, end - start + 1);
            freq[arr[start]]--;
            if (freq[arr[start]] == 0)
                count--;
            start++;
        }
    }

    cout << "Smallest subarray length = " << minLen;
    return 0;
}
