#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:

    int maxElement(vector<int>& piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(piles[i], maxi);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& piles, int hourly) {
        long long totalH = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)piles[i] / (double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElement(piles);
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalH = calculateTotalHours(piles, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

// Sample usage
int main() {
    Solution sol;
    vector<int> piles = {30, 11, 23, 4, 20};
    int h = 6;
    cout << "Minimum eating speed: " << sol.minEatingSpeed(piles, h) << endl;
    return 0;
}
