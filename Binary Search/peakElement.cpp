#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n) {
    // Edge case: If there is only one element, return index 0
    if (n == 1) return 0;

    // Checking if the first or last element is a peak
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If mid element is greater than both its neighbors, it's a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        // If the mid element is greater than the left neighbor, move right
        else if (arr[mid] > arr[mid - 1]) {
            low = mid + 1;
        } 
        // Else move left
        else { 
            high = mid - 1;
        }
    }
    
    return -1; // No peak found (though in a valid peak problem, this case never occurs)
}

// Driver code to test the function
int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peakIndex = findPeakElement(arr, n);
    cout << "Peak element found at index: " << peakIndex << endl;
    
    return 0;
}
