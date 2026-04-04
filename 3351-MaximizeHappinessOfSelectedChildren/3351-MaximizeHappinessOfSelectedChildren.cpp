// Last updated: 4/4/2026, 10:59:58 PM
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        long long ans=0;
        sort(begin(happiness), end(happiness), greater<int>());
        //sort(happiness.rbegin(),happiness.rend());
        int i=0;
        while(k--){
            if((happiness[i]-i)>0){
                ans+=(happiness[i]-i);
                i++;
            }else   break;
        }
        // long long dif=0;
        // for(int i=0;i<happiness.size() && k>0;i++,k--){
        //     if((happiness[i]-dif)>0){
        //         ans+=(happiness[i]-dif);
        //         dif++;
        //     }else   break;
        // }
        return ans;
    }
};