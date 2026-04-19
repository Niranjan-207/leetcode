// Last updated: 4/19/2026, 8:07:51 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int> premin(n,INT_MAX);
6        premin[n-1]=nums[n-1];
7        for(int i=n-2;i>=0;i--){
8            premin[i]=min(premin[i+1],nums[i]);
9        }
10
11        int ma=INT_MIN;
12        for(int i=0;i<n;i++){
13            ma=max(ma,nums[i]);
14            if(ma-premin[i]<=k) return i;
15        }
16        return -1;
17    }
18};