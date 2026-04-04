// Last updated: 4/4/2026, 11:00:47 PM
class Solution {
public:
    int bs(long long k,vector<int>& potions){
        int l=0;
        int h=potions.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(k<=potions[mid]){
                h=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int m=potions.size();
        vector<int> ans;
        int ma=potions[m-1];

        for(int num:spells){
            int cnt=0;
            
            long long target=(1ll*success+num-1)/num;

            if(target<=ma){
                cnt=m-bs(target,potions);
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};