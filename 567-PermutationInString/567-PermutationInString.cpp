// Last updated: 4/4/2026, 11:04:25 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n=s1.length();
        int m=s2.length();
        if(m<n) return false;

        vector<int> f1(26,0),f2(26,0);
        for(char c:s1){
            f1[c-'a']++;
        }
        int i=0;
        while(i<n){
            f2[s2[i]-'a']++;
            i++;
        }
        if(f1==f2)  return true;
        for(;i<m;i++){
            f2[s2[i-n]-'a']--;
            f2[s2[i]-'a']++;
            if(f1==f2)  return true;
        }
        return false;
    }
};