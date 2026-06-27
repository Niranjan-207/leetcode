// Last updated: 6/27/2026, 3:00:02 PM
1class Solution {
2public:
3    int maximumLength(vector<int>& nums) {
4        map<int,int> mp;
5        for(int num:nums)   mp[num]++;
6
7        int ans=0;
8        if(mp.count(1)){
9            if(mp[1]%2==0)  ans=mp[1]-1;
10            else    ans=mp[1];
11        }
12
13        int ma=*max_element(begin(nums),end(nums));
14
15        for(auto [num,fre]:mp){
16            if(num==1)  continue;
17            
18            long long base=num;
19            int cnt=0;
20            while(mp[base]>=2 && !(base > INT_MAX / base) && mp[base*base]>=1 && base<ma){
21                cnt+=2;
22                base*=base;
23            }
24            cnt++;
25            ans=max(ans,cnt);
26        }
27        return ans;
28    }
29};