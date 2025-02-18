//brute soln


#include<bits/stdc++.h>
using namespace std;

// // Function to sort an array of 0s, 1s, and 2s
// void zeroOneTwoSort(int a[], int n) {
//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;

//     // Count occurrences of 0, 1, and 2
//     for (int i = 0; i < n; i++) {
//         if (a[i] == 0) cnt0++;
//         else if (a[i] == 1) cnt1++;
//         else cnt2++;
//     }

//     // Modify array based on the counts
//     for (int i = 0; i < cnt0; i++) a[i] = 0;
//     for (int i = cnt0; i < cnt0 + cnt1; i++) a[i] = 1;
//     for (int i = cnt0 + cnt1; i < n; i++) a[i] = 2;
// }

// int main() {
//     int n;
    
//     // Input size of the array
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     int a[n];
    
//     // Input array elements
//     cout << "Enter the elements (0, 1, 2 only): ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Sort the array
//     zeroOneTwoSort(a, n);

//     // Output the sorted array
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



///optimised solution


// Function to sort the array of 0s, 1s, and 2s using the Dutch National Flag Algorithm
void sortArray(vector<int> &arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    // Input array elements (should contain only 0, 1, and 2)
    cout << "Enter the elements (0, 1, 2 only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sortArray(arr, n);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
