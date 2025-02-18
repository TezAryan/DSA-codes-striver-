#include<bits/stdc++.h>
using namespace std;

// void insertionsort(int arr[] , int n) {
//     for(int i =0;i<=n;i++) {
//         int j = i;
//     while(j>0 && arr[j-1]>arr[j]) {
//         int temp = arr[j-1];
//         arr[j-1] = arr[j];
//         arr[j]= temp;
//      j--;
//     }
//  }
// }
// void bubblesort(int arr[] , int n) {
//     for(int i=n-1; i>=0 ; i--) {
//         for(int j=0;j<=i-1;j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j+1] , arr[j]);
//             }
//         }
//     }
// }
// int main() {
    
//     int n;
    
//     cout<<"array size";
//     cin>>n;
//     int arr[n];
//     cout<<"elements in array";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }

//      bubblesort(arr , n);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



void merge(vector<int>& arr , int low , int mid , int high) {
    vector<int>temp;

    int left = low ;
    int right = mid+1;

    while(left <= mid && right <=high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
        while(left<= mid) {
            temp.push_back(arr[left]);
            left++;
        }   

        while(right<= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for(int i= low ; i<= high ; i++) {
            arr[i] = temp[i-low];
        }
}

void mergesort(vector<int>& arr , int low ,  int high) {
    if(low >= high) return;
    int mid = (low + high) /2;
    mergesort(arr, low , mid);
    mergesort(arr , mid+1 , high);
    merge(arr , low , mid , high);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}