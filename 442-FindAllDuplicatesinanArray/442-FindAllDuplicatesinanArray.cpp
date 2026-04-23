// Last updated: 4/23/2026, 11:39:56 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        int i=0,n=nums.size();
5        while(i<n){
6            int actual=nums[i]-1;
7            if(nums[actual]!=nums[i]){
8                swap(nums[actual],nums[i]);
9            }else{
10                i++;
11            }
12        }
13        vector<int> ans;
14        for(int i=0;i<n;i++){
15            if(i+1!=nums[i])    ans.push_back(nums[i]);
16        }
17        return ans;
18    }
19};