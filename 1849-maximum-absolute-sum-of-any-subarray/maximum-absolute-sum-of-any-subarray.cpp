class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_end =nums[0] , max_sum = nums[0];
        int min_end =nums[0] , min_sum = nums[0];

       
    for (int i = 1; i < nums.size(); i++) {
        int x = nums[i];
            max_end = max( x , max_end + x);
            max_sum = max(max_sum , max_end);

            min_end = min(x, min_end+x);
            min_sum = min(min_sum , min_end);
        }
        return max(abs(max_sum) , abs(min_sum));
    }
};

