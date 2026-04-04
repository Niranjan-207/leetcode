// Last updated: 4/4/2026, 11:03:49 PM
class Solution {
public:
    void solve(int idx,string s,vector<string>& ans){
        if(idx==s.length()){
            ans.push_back(s);
            return;
        }

        if(isdigit(s[idx]))    solve(idx+1,s,ans);
        else{
            s[idx]^=32;
            solve(idx+1,s,ans);
            s[idx]^=32;
            solve(idx+1,s,ans);
        }

    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(0,s,ans);
        return ans;
    }
};