// Last updated: 4/4/2026, 10:59:31 PM
class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        vector<long long> arr(n,LLONG_MAX);
        arr[0]=0;
        for(auto r:restrictions){
            arr[r[0]]=r[1];
        }
        
        for(int i=1;i<n;i++){
            arr[i]=min(arr[i],arr[i-1]+diff[i-1]);
        }

        for(int i=n-2;i>=0;i--){
            arr[i]=min(arr[i],arr[i+1]+diff[i]);
        }

        long long ans=0;
        for(long long num:arr) ans=max(ans,num);
        return ans;
    }
};