// Last updated: 5/14/2026, 7:26:34 PM
1class Solution {
2public:
3    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
4        
5        vector<int> fre(n+1,0);
6        for(vector<int>& booking:bookings){
7            fre[booking[0]-1]+=booking[2];
8                fre[booking[1]]-=booking[2];
9        }
10        for(int i=1;i<=n;i++){
11            fre[i]+=fre[i-1];
12        }
13
14        vector<int> ans(n);
15        for(int i=0;i<n;i++){
16            ans[i]=fre[i];
17        }
18        
19        return ans;
20    }
21};