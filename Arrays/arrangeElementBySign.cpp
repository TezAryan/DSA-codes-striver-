#include<bits/stdc++.h>
using namespace std;


//brute soln
void arrangeElementBySign(int arr[] , int n) {
    vector<int> pos,neg;

    for(int i =0;i<n;i++) {
        if( arr[i] < 0) {
            neg.push_back(arr[i]);
        }else {
            pos.push_back(arr[i]);
        }
    }
int i = 0, j = 0, k = 0;

    // Alternately place positive and negative elements
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // If there are leftover positive elements
    while (i < pos.size()) {
        arr[k++] = pos[i++];
    }

    // If there are leftover negative elements
    while (j < neg.size()) {
        arr[k++] = neg[j++];
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++) {
        cin>>arr[i];
    }

    arrangeElementBySign(arr , n);

    for(int i = 0 ; i<n;i++) {
        cout<<arr[i]<<" ";

    }
    return 0;
}

//optimal soln


    vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n,0);
        
        int posIndex =0; 
        int negIndex = 1;

        for(int i =0;i<n;i++) {
            if(nums[i] < 0) {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }else {
                ans[posIndex] = nums[i];
                posIndex +=2;
                
            }
        }
        return ans;
    }
