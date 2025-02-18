#include <iostream>
#include <vector>
#include <algorithm> // for the max function
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            maxi = max(maxi, count); // Update maxi if current count is greater
        } else {
            count = 0; // Reset count when a 0 is found
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements (0s and 1s):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);
    cout << "The maximum number of consecutive 1s is: " << maxConsecutiveOnes << endl;

    return 0;
}
