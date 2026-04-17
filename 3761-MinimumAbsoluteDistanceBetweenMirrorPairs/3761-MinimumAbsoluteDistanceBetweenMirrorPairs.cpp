// Last updated: 4/17/2026, 10:35:18 PM
1class Solution {
2public:
3    int reverse(int num){
4        int n=0;
5        while(num>0){
6            int dig=num%10;
7            n=(n*10)+dig;
8            num/=10;
9        }
10        return n;
11    }
12
13    int minMirrorPairDistance(vector<int>& nums) {
14        unordered_map<int,int> mp;
15        int dif=INT_MAX;
16        for(int i=0;i<nums.size();i++){
17            int cur=nums[i];
18            if(mp.count(cur)){
19                int j=mp[cur];
20                dif=min(dif,i-j);
21            }
22            int rev=reverse(nums[i]);
23            mp[rev]=i;
24        }
25        if(dif==INT_MAX)    return -1;
26        return dif;
27    }
28};