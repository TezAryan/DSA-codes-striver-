class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0 ; int zero = 0;
        int res = 0;

        for(int high = 0 ; high < nums.size();  high++) {
            if(nums[high] == 0) zero++;


            while( zero > k) {
                if(nums[low] == 0 ) zero--;
                low++;
            }
            res = max(res , high-low+1);
        } 
        return res;
    }

};