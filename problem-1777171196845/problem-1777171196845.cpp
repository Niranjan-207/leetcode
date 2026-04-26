// Last updated: 4/26/2026, 8:09:56 AM
1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        int n=nums.size();
5        vector<bool> valid(n,false);
6        valid[0]=true;valid[n-1]=true;
7        int ma=nums[0];
8        for(int i=1;i<n-1;i++){
9            if(nums[i]>ma){
10                valid[i]=true;
11            }
12            ma=max(ma,nums[i]);
13        }
14        ma=nums[n-1];
15        for(int i=n-2;i>=0;i--){
16            if(nums[i]>ma){
17                valid[i]=true;
18            }
19            ma=max(ma,nums[i]);
20        }
21        vector<int> ans;
22        for(int i=0;i<n;i++){
23            if(valid[i]) ans.push_back(nums[i]);
24        }
25        return ans;
26    }
27};