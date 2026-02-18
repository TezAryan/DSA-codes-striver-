class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        int nstart = newInterval[0];
        int nend = newInterval[1];
        int n = interval.size();
        int i = 0;


        vector<vector<int>> result;
        while ( i < n && interval[i][1] < nstart ) {
            result.push_back(interval[i]);
            i++;
        }
        
        while ( i < n && interval[i][0] <= nend){
            nstart = min(nstart , interval[i][0]);
            nend = max(nend , interval[i][1]);
            i++;
        }

        result.push_back({nstart , nend}); 

        while ( i < n ) { 
            result.push_back(interval[i]);
            i++;
        }

        return result;

       
    }
};