#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(vector<int> &a) {
    int n = a.size() ;
    int longest = 1;
    unordered_set<int> st;
    for(int i =0;i<n;i++) {
        st.insert(a[i]);

    }
    for(auto it : st) {
        if(st.find(it -1 ) == st.end()) {
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()) {
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest , cnt);
        }
    }
    return longest;
}

    int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 
    cout << "Length of the longest consecutive sequence: " 
         << longestConsecutiveSequence(a) << endl;

    return 0;
}
