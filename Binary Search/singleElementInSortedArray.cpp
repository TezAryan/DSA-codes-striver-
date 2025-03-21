#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    int low = 1;
    int high = n - 2;

    // Edge case: If there's only one element in the array
    if (n == 1) return arr[0];

    // Check if the single element is at the beginning or end
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    // Binary search to find the single element
    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is the unique element
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        // If mid is odd and matches with the previous element or
        // if mid is even and matches with the next element, move right
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || 
            (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        } else {
            // Move left if the pattern is not maintained
            high = mid - 1;
        }
    }

    // Return -1 if no unique element is found (although it should not happen)
    return -1;
}

int main() {
    vector<int> arr;
    int n, num;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements (sorted with pairs except one): ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr.push_back(num);
    }

    int result = singleNonDuplicate(arr);
    if (result != -1) {
        cout << "The single non-duplicate element is: " << result << endl;
    } else {
        cout << "No unique element found." << endl;
    }

    return 0;
}

// int main() {
//     vector<int> arr;
// int n,num;
// cout<<"enter the number of elements:";
// cin>>n;
