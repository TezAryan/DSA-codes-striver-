 #include<bits/stdc++.h>
 using namespace std;
 
 
 int findFloor(vector<int>& arr, int k) {
        int n = arr.size();
   int ans = -1 ;
    int low = 0;
    int high = n-1;
    
    while (low <= high) {
    int mid = (low + high )/2;
    
      if ( arr[mid] >= k ) {
        
        ans = mid;
        high = mid -1;
       } else {
        low = mid+1;
       
       } 
        
    }
    
    return ans;
    
    }
};