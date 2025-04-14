#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:

    // Helper function to find the minimum and maximum value in the array
    vector<int> minMax(vector<int>& arr) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            maxi = max(arr[i], maxi);
            mini = min(arr[i], mini);
        }

        return {mini, maxi};
    }

    // Function to count how many bouquets can be formed in 'mid' days
    int NoOFDays(vector<int>& arr, int mid, int k) {
        int count = 0;
        int bouquets = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets;
    }

    // Main function to find the minimum number of days to make 'm' bouquets of 'k' flowers
    int minDays(vector<int>& arr, int m, int k) {
        vector<int> maxMin = minMax(arr);
        int n = arr.size();
        int low = maxMin[0];
        int high = maxMin[1];

        if (m * k > n) return -1;

        int noofdays = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int bouquets = NoOFDays(arr, mid, k);

            if (bouquets >= m) {
                noofdays = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return noofdays;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> bloomDays = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    cout << "Minimum days required: " << sol.minDays(bloomDays, m, k) << endl;

    return 0;
}
