class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //     unordered_map<int, int> mp;
    //     mp[0] = 1;   // base case
        
    //     int prefixSum = 0;
    //     int count = 0;
        
    //     for(int i = 0; i < nums.size(); i++) {
    //         prefixSum += nums[i];
            
    //         if(mp.find(prefixSum - k) != mp.end()) {
    //             count += mp[prefixSum - k];
    //         }
            
    //         mp[prefixSum]++;
    //     }
        
    //     return count;sum
    // }
// };


unordered_map<int , int> mp;
mp[0] = 1;

int sum=0;
int count = 0;

for(int i = 0 ; i<nums.size() ; i++) {
    sum+= nums[i];

  int ques = sum - k;
  int freq = mp[ques];
  count += freq;
  mp[sum]++;
}

return count;

    } 
};


