// Last updated: 4/4/2026, 10:59:57 PM
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<t.size();j++){
                if(s[i]==t[j])  ans+=(abs(i-j));
            }
        }
        return ans;
    }
};