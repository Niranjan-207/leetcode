// Last updated: 4/4/2026, 11:07:52 PM
class Solution {
public:
    void generate(string temp,int& n,int open,int close,vector<string>& ans){
        if(open+close == (2*n)){
            ans.push_back(temp);
        }

        if(open<n){
            generate(temp+'(',n,open+1,close,ans);
        }

        if(close<open){
            generate(temp+')',n,open,close+1,ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",n,0,0,ans);
        return ans;
    }
};