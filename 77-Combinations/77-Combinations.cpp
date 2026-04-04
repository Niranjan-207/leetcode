// Last updated: 4/4/2026, 11:07:06 PM
class Solution {
public:
    void solve(int num,int n,int k,vector<int>& temp,vector<vector<int>>& ans){
        if(temp.size()+(n-num+1)<k) return;

        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(num>n)  return;

        temp.push_back(num);
        solve(num+1,n,k,temp,ans);
        temp.pop_back();

        solve(num+1,n,k,temp,ans);
    }

    vector<vector<int>> combine(int n, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> ans;
        vector<int> temp;
        solve(1,n,k,temp,ans);

        return ans;
    }
};