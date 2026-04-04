// Last updated: 4/4/2026, 10:59:30 PM
class Solution {
public:
    int reverseDegree(string s) {
        int su=0;
        for(int i=0;i<s.length();i++){
            su+=((26+97-(s[i]))*(i+1));
            //cout<<(26+97-s[i]);
        }
        return su;
    }
};