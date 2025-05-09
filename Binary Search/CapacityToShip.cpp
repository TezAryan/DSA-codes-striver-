#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    // Helper function to find how many days are needed with given capacity
    int findDays(vector<int>& weights, int cap) {
        int days = 1;
        int load = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > cap) {
                days += 1;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return days;
    }

    // Main function to find minimum capacity needed to ship within given days
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = (low + high) / 2;
            int noOfDays = findDays(weights, mid);

            if (noOfDays <= days) {
                high = mid - 1; // Try to minimize capacity
            } else {
                low = mid + 1;  // Increase capacity
            }
        }
        return low;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << "Minimum capacity to ship within " << days << " days: " 
         << sol.shipWithinDays(weights, days) << endl;
    return 0;
}
