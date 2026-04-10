// Last updated: 4/10/2026, 8:56:00 AM
1class Solution {
2public:
3    int minimumDistance(vector<int>& nums) {
4        int ans=INT_MAX;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            for(int j=0;j<n;j++){
8                for(int k=0;k<n;k++){
9                    if(i!=j && j!=k && k!=i && nums[i]==nums[j] && nums[j]==nums[k] && nums[k]==nums[i]){
10                        ans=min(ans,abs(i-j)+abs(j-k)+abs(k-i));
11                    }
12                }
13            }
14        }
15            if(ans==INT_MAX) return -1;
16        return ans;
17    }
18    
19};