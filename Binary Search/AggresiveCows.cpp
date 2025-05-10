#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool CanWePlace(vector<int>& stalls, int dist, int cows) {
    int cntCows = 1;
    int last = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last >= dist) {
            cntCows++;
            last = stalls[i];
        }
        if (cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();

    int low = 1, high = stalls[n - 1] - stalls[0];
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (CanWePlace(stalls, mid, k)) {
            ans = mid;          // Store the possible answer
            low = mid + 1;      // Try for a bigger minimum distance
        } else {
            high = mid - 1;     // Try for a smaller distance
        }
    }

    return ans;
}

int main() {1
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;  // Number of cows

    int result = aggressiveCows(stalls, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
