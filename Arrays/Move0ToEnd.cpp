//brute force soln

#include<bits/stdc++.h>
using namespace std;



// vector<int> moveZeros(int n, vector<int> a) {
//     vector<int> temp;
//     for (int i = 0; i < n; i++) {
//         if (a[i] != 0) {              // taking all non-zero numbers and storing them in temp
//             temp.push_back(a[i]);
//         }
//     }

//     int nz = temp.size();
//     for (int i = 0; i < nz; i++) {  // now storing the non-zero numbers in the actual array from the start
//         a[i] = temp[i];
//     }

//     for (int i = nz; i < n; i++) {  // putting zeros at the end
//         a[i] = 0;
//     }

//     return a;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     vector<int> a(n);
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     a = moveZeros(n, a);

//     cout << "Array after moving zeroes to the end: ";
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



//optimal solution


void moveZeros(vector<int>& nums, int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return;

    for (int i = j + 1; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeros(nums, n);

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

