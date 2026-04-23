// Last updated: 4/23/2026, 8:33:58 PM
1class Solution {
2public:
3    vector<long long> distance(vector<int>& nums) {
4        int n=nums.size();
5        vector<long long> ans(n,0);
6
7        unordered_map<int,pair<long long,int>> mp;
8        for(int i=0;i<n;i++){
9            int num=nums[i];
10
11            if(mp.find(num)==mp.end()){
12                mp[num]={i,1};
13            }else{
14                long long sum=mp[num].first;
15                int cnt=mp[num].second;
16                ans[i]+=((1ll*cnt*i)-sum);
17                mp[num].first+=i;
18                mp[num].second++;
19            }
20        }
21        mp.clear();
22        for(int i=n-1;i>=0;i--){
23            int num=nums[i];
24
25            if(mp.find(num)==mp.end()){
26                mp[num]={i,1};
27            }else{
28                long long sum=mp[num].first;
29                int cnt=mp[num].second;
30                ans[i]+=(sum-(1ll*cnt*i));
31                mp[num].first+=i;
32                mp[num].second++;
33            }
34        }
35        return ans;
36    }
37};