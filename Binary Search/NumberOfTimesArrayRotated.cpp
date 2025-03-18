#include <bits/stdc++.h>
using namespace std;

int sortedArray(vector<int>& arr, int n) {
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the array from low to high is already sorted
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        // If the array from low to mid is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        } else { 
            // If the array from mid to high is sorted
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sortedArray(arr, n);
    cout << "The minimum element in the sorted rotated array is: " << arr[result] << endl;

    return 0;
}
