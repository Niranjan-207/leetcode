// Last updated: 4/4/2026, 11:07:24 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(begin(intervals),end(intervals));
        vector<vector<int>> ans;
        int l=intervals[0][0],r=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(l<=intervals[i][0] && intervals[i][0]<=r){
                r=max(r,intervals[i][1]);
            }else{
                ans.push_back({l,r});
                l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        ans.push_back({l,r});
        return ans;
    }
};