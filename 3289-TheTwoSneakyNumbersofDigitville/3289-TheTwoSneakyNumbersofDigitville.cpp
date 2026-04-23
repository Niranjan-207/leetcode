// Last updated: 4/23/2026, 11:44:40 PM
1class Solution {
2public:
3    vector<int> getSneakyNumbers(vector<int>& nums) {
4        int i=0,n=nums.size();
5
6        while(i<n){
7            int act=nums[i];
8            if(nums[i]!=nums[act]){
9                swap(nums[i],nums[act]);
10            }else{
11                i++;
12            }
13        }
14        vector<int> ans;
15        for(int i=0;i<n;i++){
16            if(nums[i]!=i)  ans.push_back(nums[i]);
17        }
18        return ans;
19    }
20};