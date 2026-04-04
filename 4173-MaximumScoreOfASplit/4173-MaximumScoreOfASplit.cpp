// Last updated: 4/4/2026, 10:57:54 PM
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefix(n),minArr(n);
        for(int i=0;i<n;i++){
            if(i==0) prefix[i]=1ll*nums[i];
            else    prefix[i]=prefix[i-1]+1ll*nums[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i==(n-1))    minArr[i]=1ll*nums[i];
            else    minArr[i]=min(minArr[i+1],1ll*nums[i]);
        }
        long long ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            // if(i==(n-1)){
            //     ans=max(ans,1ll*prefix[i]);
            // }else{
                ans=max(ans,1ll*(prefix[i]-minArr[i+1]));
            //}
        }
        return ans;
        
    }
};