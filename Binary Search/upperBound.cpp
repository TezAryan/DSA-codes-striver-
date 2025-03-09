#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr, int k) {
    int n = arr.size();
    int ans = -1;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  

        if (arr[mid] > k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int k = 4;
    cout << "Upper Bound Index: " << upperBound(arr, k) << endl;
}
