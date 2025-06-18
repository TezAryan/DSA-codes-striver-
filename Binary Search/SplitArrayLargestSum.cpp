#include <bits/stdc++.h>
using namespace std;

int countPartitions(vector<int>& nums, int maxSum) {
    int count = 1, sum = 0;
    for (int num : nums) {
        if (sum + num > maxSum) {
            count++;
            sum = num;
        } else {
            sum += num;
        }
    }
    return count;
}

int findMinLargestSum(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (countPartitions(nums, mid) <= k) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

void printSubarrays(vector<int>& nums, int k, int maxAllowedSum) {
    vector<vector<int>> partitions;
    vector<int> current;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (sum + nums[i] > maxAllowedSum || (nums.size() - i == k - partitions.size())) {
            partitions.push_back(current);
            current.clear();
            sum = 0;
        }
        current.push_back(nums[i]);
        sum += nums[i];
    }

    if (!current.empty()) {
        partitions.push_back(current);
    }

    // Print result
    cout << "Minimized largest sum: " << maxAllowedSum << "\n";
    cout << "Partitions:\n";
    for (auto& part : partitions) {
        cout << "[ ";
        for (int x : part) cout << x << " ";
        cout << "]\n";
    }
}

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    int minMaxSum = findMinLargestSum(nums, k);
    printSubarrays(nums, k, minMaxSum);

    return 0;
}
