class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int bestEnding = nums[0];
        // int ans = nums[0];

        // for (int i =1; i< nums.size() ; i++) {
        //     int v1 = bestEnding + nums[i];
        //     int v2 = nums[i];

        //     bestEnding = max(v1 , v2);
        //     ans = max( ans , bestEnding);
        // } 

        // return ans;


        int maxi = INT_MIN;
        int sum = 0;

        for(int i = 0 ; i< nums.size() ; i++) {
            sum+= nums[i];
            if( sum > maxi) {
                maxi = sum;
            }

            if(sum < 0) {
                sum = 0;
            }
        }
        return maxi;
   }
};