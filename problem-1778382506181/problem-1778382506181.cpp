// Last updated: 5/10/2026, 8:38:26 AM
1class Solution {
2public:
3    long long minArraySum(vector<int>& nums) {
4        set<int> se;
5        for(int num:nums) se.insert(num);
6        long long ans=0;
7        for(int num:nums){
8            int be=num;
9            for(int i=1;i*i<=num;i++){
10                if(num%i==0){
11                    if(se.find(i)!=se.end()){
12                        be=min(be,i);
13                    }
14                    int ot=num/i;
15                    if(se.find(ot)!=se.end()){
16                        be=min(be,ot);
17                    }
18                }
19            }
20            ans+=be;
21        }
22        return ans;
23    }
24};