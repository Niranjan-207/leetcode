// Last updated: 5/14/2026, 11:25:59 AM
1class Solution {
2public:
3    bool isGood(vector<int>& nums) {
4        bitset<201> bs;
5        int n=nums.size();
6        int ncnt=0;
7        int cnt=0;
8        for(int num:nums){
9            if(num<(n-1)){
10                if(bs[num]) return false;
11                else{
12                    bs[num]=1;
13                    cnt++;
14                }
15            }else if(num==(n-1)){
16                ncnt++;
17            }else{
18                return false;
19            }
20        }
21        return (ncnt==2 && (cnt+ncnt)==n);
22    }
23};