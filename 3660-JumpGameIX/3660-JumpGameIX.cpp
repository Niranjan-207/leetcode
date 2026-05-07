// Last updated: 5/7/2026, 10:37:35 PM
1class Solution {
2public:
3    vector<int> maxValue(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> pm(n),sm(n);
6        pm[0]=nums[0];
7        sm[n-1]=nums[n-1];
8        for(int i=1;i<n;i++){
9            pm[i]=max(pm[i-1],nums[i]);
10        }
11        for(int i=n-2;i>=0;i--){
12            sm[i]=min(sm[i+1],nums[i]);
13        }
14        vector<int> ans(n);
15        ans[n-1]=pm[n-1];
16        for(int i=n-2;i>=0;i--){
17            if(pm[i]>sm[i+1]){
18                ans[i]=ans[i+1];
19            }else{
20                ans[i]=pm[i];
21            }
22        }
23        return ans;
24    }
25};