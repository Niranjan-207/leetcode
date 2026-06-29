// Last updated: 6/29/2026, 11:26:56 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        set<int> se(begin(nums),end(nums));
5
6        int ans=0;
7        for(int num:se){
8            if(!se.count(num-1)){
9                int cur=num+1;
10
11                int len=1;
12                while(se.count(cur++))  len++;
13
14                ans=max(ans,len);
15            }
16        }
17        return ans;
18    }
19};