// Last updated: 4/4/2026, 11:08:06 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        unordered_map<char,int> fre;
        int l=0;
        for(int r=0;r<s.length();r++){
            fre[s[r]]++;
            while(fre[s[r]]>1){
                fre[s[l]]--;
                if(fre[s[l]]==0){
                  
                    fre.erase(s[l]);
                }
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};