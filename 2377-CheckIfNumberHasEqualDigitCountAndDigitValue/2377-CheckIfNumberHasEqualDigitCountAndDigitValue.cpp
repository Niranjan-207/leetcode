// Last updated: 4/4/2026, 11:00:48 PM
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int> mp;
        for(char c:num){
            mp[c]++;
        }
        for(int i=0;i<num.length();i++){
            char c='0'+i;
            int  n=num[i]-'0';
            if(mp[c]!=n)    return false;
        }
        return true;
    }
};