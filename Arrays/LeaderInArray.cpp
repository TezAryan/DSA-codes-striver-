#include<bits/stdc++.h>
using namespace std;

//brute soln
//timeComplexity(n2) 

// void LeaderInArrayBrute(int arr[] , int n) {
//     for(int i =0;i<n;i++ ){ 
//        bool leader = true;
//         for(int j=i+1 ; j<n ; j++) {
//             if(arr[j] > arr[i]) {
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader) {
//             cout<<arr[i] << " ";
//         }
//     }
//      cout<<endl;
// }
// //optimal soln


// int main() {
//     int arr[] = {16, 17, 4, 3, 5, 2}; 
//     int n = sizeof(arr) / sizeof(arr[0]); 

//     cout << "Leaders in the array (Brute Force): ";
//     LeaderInArrayBrute(arr, n);

//     return 0;
// }


vector<int> LeaderInArrayOpt(vector<int> &arr , int n) {
    vector<int> ans;

    int maxi = INT_MIN; 
    for(int i = n-1 ;i>=0 ;i--) {
        if(arr[i] > maxi) {
            ans.push_back(arr[i]);
        }

        maxi = max(maxi , arr[i]);
    }

    sort(ans.begin() , ans.end());
    return ans;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2}; // Input array
    int n = arr.size(); // Size of the array

    vector<int> leaders = LeaderInArrayOpt(arr, n);

    cout << "Leaders in the array (Optimized): ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}