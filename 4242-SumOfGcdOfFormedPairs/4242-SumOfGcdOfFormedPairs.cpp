// Last updated: 4/4/2026, 10:57:28 PM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long mx=INT_MIN;
        int n=nums.size();
        vector<int> gcdVals(n);

        for(int i=0;i<n;i++){
            mx=max(mx,1ll*nums[i]);
            gcdVals[i]=gcd(mx,nums[i]);
        }
        sort(begin(gcdVals),end(gcdVals));
        long long sum=0;
        int l=0;
        int r=n-1;
        while(l<r ){
            if(l==r) break;
            sum+=gcd(gcdVals[l++],gcdVals[r--]);
        }
        return sum;
    }
};