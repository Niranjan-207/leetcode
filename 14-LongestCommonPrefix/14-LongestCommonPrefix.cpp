// Last updated: 4/4/2026, 11:08:00 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";

        sort(strs.begin(),strs.end());
        string ans="";
        int j=0;
        while(j<strs[0].size() && strs[0][j]==strs[strs.size()-1][j]){
            j++;
        }
        return strs[0].substr(0,j);
    }
};