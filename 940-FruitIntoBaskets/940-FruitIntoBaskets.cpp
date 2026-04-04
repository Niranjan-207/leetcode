// Last updated: 4/4/2026, 11:03:27 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int l=0,cnt=0,n=fruits.size();
        int ans=0;
        for(int r=0;r<n;r++){
            mp[fruits[r]]++;
            cnt++;
            while(l<n && mp.size()>2){
                mp[fruits[l]]--;
                cnt--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};