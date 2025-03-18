#include <bits/stdc++.h>
using namespace std;

int sortedArray(vector<int>& arr, int n) {
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the array from low to mid is sorted
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        } else { // If the array from mid to high is sorted
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sortedArray(arr, n);
    cout << "The minimum element in the sorted rotated array is: " << result << endl;

    return 0;
}
