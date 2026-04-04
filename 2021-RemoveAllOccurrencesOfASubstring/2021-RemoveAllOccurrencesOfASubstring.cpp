// Last updated: 4/4/2026, 11:01:27 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        string ans="";
        for(char c:s){
            ans+=c;
            if(ans.length()>=part.length() && 
            ans.substr(ans.size() - part.size())==part){
                ans.erase(ans.end()-part.length(),ans.end());
            }  
        }
        return ans;
    }
};