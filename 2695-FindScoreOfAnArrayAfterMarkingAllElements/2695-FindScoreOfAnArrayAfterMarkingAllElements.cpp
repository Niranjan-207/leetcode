// Last updated: 4/4/2026, 11:00:28 PM
class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            arr[i]={nums[i],i};
        }
        sort(begin(arr),end(arr));
        vector<bool> seen(n,false);
        long long sum=0;
        for(auto& [num,idx]:arr){
            if(seen[idx])   continue;

            seen[idx]=true;
            sum+=num;
            
            if(idx+1 <n)    seen[idx+1]=true;
            if(idx-1>=0)    seen[idx-1]=true;
        }
        return sum;
    }
};