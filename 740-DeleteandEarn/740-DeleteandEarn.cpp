// Last updated: 4/24/2026, 12:12:59 AM
1class Solution {
2public:
3    int deleteAndEarn(vector<int>& nums) {
4        map<int,int> mp;
5        for(int num:nums)   mp[num]+=num;
6        vector<int> arr;
7        for(auto& [a,b]:mp) arr.push_back(a);
8        
9        int m=arr.size();
10        vector<int> dp(m,0);
11        dp[0]=mp[arr[0]];
12        for(int i=1;i<m;i++){
13            int take=mp[arr[i]];
14            int dont=dp[i-1];
15
16            if(arr[i-1]+1==arr[i]){
17                if(i-2>=0)   take+=dp[i-2];
18            }else{
19                take+=dp[i-1];
20            }
21            
22            dp[i]=max(take,dont);
23        }
24        return dp[m-1];
25    }
26};