// Last updated: 5/14/2026, 7:26:10 PM
1class Solution {
2public:
3    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
4        //map<int,int> mp;
5        
6        vector<int> fre(n+1,0);
7        for(vector<int> booking:bookings){
8            fre[booking[0]-1]+=booking[2];
9            //if(booking[1]+1<n)
10                fre[booking[1]]-=booking[2];
11        }
12        for(int i=1;i<=n;i++){
13            fre[i]+=fre[i-1];
14        }
15
16        vector<int> ans(n);
17        for(int i=0;i<n;i++){
18            ans[i]=fre[i];
19        }
20        //int cnt=0;
21        // for(auto& [idx,delta]:mp){
22        //     cnt+=delta;
23        //     ans.push_back(cnt);
24        // }
25        return ans;
26    }
27};