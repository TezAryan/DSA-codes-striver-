class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int z =0 ; 
        int o = 0;
        int res = 0;
        unordered_map<int, int> f;

        for( int i = 0 ; i<nums.size(); i++) {
            if(nums[i] == 0) z++;
            else o++;
            int diff = z - o;

            if(diff == 0) 
            res = max(res , i+1);
        

            if(f.find(diff) == f.end()) {
                f[diff] = i;
                
            } else { 
                int idx = f[diff];
                int len = i - idx;
                res = max ( res , len);
            }
        }
        return res;
    }
};