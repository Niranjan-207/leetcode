// Last updated: 4/4/2026, 10:58:50 PM
class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                bool flag=true;
                int match=mp.begin()->second;
                for(auto& [c,cnt]:mp){
                    if(cnt!=match){
                        flag=false;
                        break;
                    }
                }
                    if(flag){
                        ans=max(ans,j-i+1);
                    }
            }
        }
        return ans;
    }
};