// Longest subarray with all distinct elements
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int n = 7;

    unordered_set<int> s;
    int start = 0, maxLen = 0;

    for (int end = 0; end < n; end++) {
        while (s.count(arr[end])) {
            s.erase(arr[start]);
            start++;
        }
        s.insert(arr[end]);
        maxLen = max(maxLen, end - start + 1);
    }

    cout << "Longest subarray with distinct elements = " << maxLen;
    return 0;
}
