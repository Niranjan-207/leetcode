// Last updated: 4/5/2026, 8:21:17 AM
1class Solution {
2public:
3    vector<int> findGoodIntegers(int n) {
4        int li=cbrt(n);
5       map<int,int> mp;
6        for(int i=0;i<=li;i++){
7            for(int j=i;j<=li;j++){
8                long long sum=1ll*i*i*i + 1ll*j*j*j;
9                if(sum>n) break;
10                mp[sum]++;
11            }
12        }
13        vector<int> res;
14        for(auto& [num,fre]:mp){
15            if(fre>=2) res.push_back(num);
16        }
17        return res;
18        
19    }
20};