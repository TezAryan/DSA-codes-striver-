class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end());
        int start1 = intervals[0][0];
        int end1 =intervals[0][1];

        vector<vector<int>>result;

        for(int i = 1; i<intervals.size() ; i++) {
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end1 >= start2) {
              
                end1 = max(end1 , end2);
              }  else { 
                    result.push_back({start1 ,end1});
                    start1 = start2 ; 
                    end1 = end2;
                
            }
        }
            result.push_back({start1 , end1});

              
        return result;
    }
};