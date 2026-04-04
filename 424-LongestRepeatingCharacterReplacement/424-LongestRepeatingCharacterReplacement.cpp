// Last updated: 4/4/2026, 11:04:52 PM
class Solution {
public:

    int characterReplacement(string s, int k) {
        int len=0,n=s.length(),mf=0;
        int l=0;
        unordered_map<char,int> mp;
        for(int r=0;r<n;r++){
            mp[s[r]]++;
            mf=max(mf,mp[s[r]]);
            //mf=maxfre(mp);
            if((r-l+1)-mf > k){
                mp[s[l]]--;
                l++;
                //mf=maxfre(mp);
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};