// Last updated: 4/4/2026, 11:04:57 PM
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int len=0;
        bool has=false;
        for(auto& [a,b]:mp){
            if(b%2==0)  len+=b;
            else{    len+=(b-1);has=true;}
        }
        if(has) return len+1;
        return len;
    }
};