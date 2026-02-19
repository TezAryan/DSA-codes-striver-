class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
         vector<vector<int>> res;
        
        int i = 0;
        int j = 0;
        
        int n = a.size();
        int m = b.size();
        
        while (i < n && j < m) {
            
            int start1 = a[i][0];
            int end1   = a[i][1];
            
            int start2 = b[j][0];
            int end2   = b[j][1];
            
            if (start1 <= start2) {
                
                if (end1 >= start2) {
                    int s = max(start1, start2);
                    int e = min(end1, end2);
                    res.push_back({s, e});
                }
            }
            else {
                
                if (end2 >= start1) {
                    int s = max(start1, start2);
                    int e = min(end1, end2);
                    res.push_back({s, e});
                }
            }
            
            if (end1 <= end2) {
                i++;
            } 
            else {
                j++;
            }
        }
        
        return res;
    }
};