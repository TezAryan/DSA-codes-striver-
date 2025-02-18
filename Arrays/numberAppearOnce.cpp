#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>& arr) {
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++) {
        xorr = xorr ^ arr[i]; // XOR all elements
    }
    return xorr; // The result will be the unique element
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements (with only one unique element, and others appearing twice):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int singleElement = getSingleElement(arr);
    cout << "The element that appears only once is: " << singleElement << endl;

    return 0;
}
