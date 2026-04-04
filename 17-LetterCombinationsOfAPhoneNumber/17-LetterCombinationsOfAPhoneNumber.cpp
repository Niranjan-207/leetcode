// Last updated: 4/4/2026, 11:07:57 PM
class Solution {
public:
    void solve(string temp,int idx,vector<string>& str,string& digits,vector<string>& ans){
        if(temp.length()==digits.length()){
            ans.push_back(temp);
            return;
        }

        for(char c:str[digits[idx]-'0']){
            solve(temp+c,idx+1,str,digits,ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits=="")  return ans;
        vector<string> str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve("",0,str,digits,ans);
        return ans;
    }
};