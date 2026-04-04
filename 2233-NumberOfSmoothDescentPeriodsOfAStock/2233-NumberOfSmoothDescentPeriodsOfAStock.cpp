// Last updated: 4/4/2026, 11:01:06 PM
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        vector<int> range;
        int n=prices.size();
        long long cnt=1;
        long long ans=0;
        for(int i=1;i<n;i++){
            if(prices[i]==prices[i-1]-1){
                cnt++;
            }else{
                ans+=(cnt*(cnt+1))/2;
                cnt=1;
            }
        }
       ans+=(cnt*(cnt+1))/2;
        return ans;
    }
};