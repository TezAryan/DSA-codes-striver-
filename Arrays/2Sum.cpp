#include<bits/stdc++.h>
using namespace std;

///brute soln


pair<int,int> twoSum(int arr[] , int n , int target) {
    

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] + arr[j] == target) {
                return {i,j};

            }
        }
    }
    return {-1,-1};
} 
int main () {
    int target = 9;
    int n =5;
    int arr[] = {2,7,11,15,3};

    pair<int,int> result = twoSum(arr , n , target);

   if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;


}

///better soln

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mpp; // Map to store numbers and their indices
    int n = nums.size(); // Size of the input array

    for (int i = 0; i < n; i++) {
        int num = nums[i]; // Current number
        int moreneed = target - num; // The number needed to reach the target

        // If the complementary number is already in the map
        if (mpp.find(moreneed) != mpp.end()) {
            return {mpp[moreneed], i}; // Return the indices of the two numbers
        }

        // Otherwise, store the current number and its index in the map
        mpp[num] = i;
    }

    // If no pair is found, return {-1, -1}
    return {-1, -1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Input array
    int target = 9; // Target sum

    vector<int> result = twoSum(nums, target); // Call the twoSum function

    // Print the result
    if (result[0] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}


//optimised soln



string read(int n, vector<int> book, int target) {
    int left = 0;
    int right = n - 1; // Corrected the right variable declaration

    // Sort the array to apply two-pointer technique
    sort(book.begin(), book.end());

    // Apply two-pointer approach to find if the target can be achieved
    while (left < right) {
        int sum = book[left] + book[right];
        
        if (sum == target) {
            return "YES"; // Return "YES" if two numbers sum to target
        } 
        else if (sum < target) {
            left++; // Move left pointer to the right if the sum is less than the target
        } 
        else {
            right--; // Move right pointer to the left if the sum is more than the target
        }
    }

    // If no such pair is found, return "NO"
    return "NO";
}

int main() {
    vector<int> book = {3, 5, 1, 7, 9}; // Example input
    int target = 10;
    int n = book.size();

    cout << read(n, book, target) << endl; // Calling the read function
    return 0;
}
