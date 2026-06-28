// Last updated: 6/28/2026, 8:03:43 AM
1class Solution {
2public:
3    long long maxSum(vector<int>& nums, int k, int mul) {
4        sort(rbegin(nums),rend(nums));
5
6        long long ans=0;
7        for(int i=0;i<k;i++){
8            if(mul>=1){
9                ans+=(1ll*nums[i]*mul);
10                mul--;
11            }else{
12                ans+=nums[i];
13            }
14        }
15        return ans;
16    }
17};
18