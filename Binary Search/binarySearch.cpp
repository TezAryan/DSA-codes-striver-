#include<bits/stdc++.h>
using namespace std;

// recursive approach

int binarySearch(int arr[] , int low , int high , int target){
    if( low > high ) return -1;
   int mid = (low + high )/2;

    if(target == arr[mid] ) return mid;
    else if (target > arr[mid]) 
       return binarySearch(arr , mid+1 , high ,target);
       
       return binarySearch(arr , low , mid-1 ,target);

}

int main() {
    int arr[5] = {1 , 2 ,3 , 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 3;
    int result = binarySearch(arr , 0 , n-1 , target);

    cout<<result;

    return 0;

}


//normal approach 

 int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; int high = n-1;

        while( low <= high) {
            int mid = (low + high )/2;
         if( target == nums[mid] ) return mid;
        else if (target > nums[mid] ) 
            low = mid+1;
         else 
            high = mid-1;
        
        }
        return -1;
        
    }