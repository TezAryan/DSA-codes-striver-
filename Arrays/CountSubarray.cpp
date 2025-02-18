//subarray is the contigous part of the array

#include<bits/stdc++.h>
using namespace std;
 //brute soln 

    vector<int> CountSubArray(vector <int>& arr) {
        int count = 0;
        for(int i =0;i<n;i++) {
            int sum = 0;
            for(int j =i;j<n;j++ ){
                sum+= arr[j];
            }
            if(sum == k)
            count++;
        }
    } 
  
  int main() {
    
  }
