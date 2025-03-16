#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int upperBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

pair<int , int> firstAndLastOccurance(vector<int>& arr  , int k) {
    int lb = lowerBound(arr , k);
    if(lb == arr.size() || arr[lb] != k) return {-1 , -1};
    return {lb , upperBound(arr , k) - 1};

}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to find the first and last occurrence: ";
    cin >> k;

    // Sorting the array (if not already sorted)
    sort(arr.begin(), arr.end());

    pair<int, int> result = firstAndLastOccurance(arr, k);
    
    if (result.first == -1) {
        cout << "Element " << k << " not found in the array." << endl;
    } else {
        cout << "First occurrence of " << k << " at index: " << result.first << endl;
        cout << "Last occurrence of " << k << " at index: " << result.second << endl;
    }

    return 0;
}
