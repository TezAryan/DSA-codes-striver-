class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int min_ending = nums[0] , curMax = 0;
       int max_ending = nums[0] , curMin = 0;

        for( int x : nums) {
            curMax = max (x , x + curMax);
            max_ending = max (curMax , max_ending);

            curMin = min( x ,  curMin + x);
            min_ending = min ( curMin , min_ending);

            total += x;
        }

        if (max_ending < 0 ) return max_ending;

        return max(max_ending , total - min_ending);
    }
};