#include <iostream>
#include <vector>
using namespace std;



    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the target
            if (arr[mid] == target) return mid;

            // Check if the left part is sorted
            if (arr[low] <= arr[mid]) {
                // Target lies within the left sorted part
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // Right part must be sorted
            else {
                // Target lies within the right sorted part
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        // If target not found
        return -1;
    };


int main() {
    
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = search(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}


/////////////with duplicates element //////////////////


    // bool search(vector<int>& arr, int target) {
    //          int n = arr.size();
    //     int low = 0;
    //     int high = n - 1;

    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;

    //         // Check if mid is the target
    //         if (arr[mid] == target) return true;
    //         // for same elements  in start  end center
    //         if(arr[low] == arr[mid] && arr[mid] == arr[high]){
    //             low++ ; high--;
    //             continue;
    //         }

    //         // Check if the left part is sorted
    //         if (arr[low] <= arr[mid]) {
    //             // Target lies within the left sorted part
    //             if (arr[low] <= target && target < arr[mid]) {
    //                 high = mid - 1;
    //             } else {
    //                 low = mid + 1;
    //             }
    //         }
    //         // Right part must be sorted
    //         else {
    //             // Target lies within the right sorted part
    //             if (arr[mid] < target && target <= arr[high]) {
    //                 low = mid + 1;
    //             } else {
    //                 high = mid - 1;
    //             }
    //         }
    //     }

     
    //     return false;
    // };
    
