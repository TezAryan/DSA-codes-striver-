#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> num;

    int result = linearSearch(n, num, arr);
    if (result != -1) {
        cout << "Number found at index " << result << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
