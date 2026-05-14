// Last updated: 5/14/2026, 8:29:16 PM
1class Solution {
2public:
3    int minMoves(vector<int>& nums, int limit) {
4        int n=nums.size();
5        vector<int> dif(2*limit+2,0);
6        for(int i=0;i<(n/2);i++){
7            dif[2]+=2;
8            dif[2*limit+1]-=2;
9
10            int a=nums[i];
11            int b=nums[n-i-1];
12            int s=a+b;
13
14            int l=min(a,b)+1;
15            int r=max(a,b)+limit;
16
17            dif[l]+=(-1);
18            dif[r+1]-=(-1);
19            dif[s]+=(-1);
20            dif[s+1]-=(-1);
21        }
22
23        for(int i=1;i<dif.size();i++){
24            dif[i]+=dif[i-1];
25        }
26        return *min_element(begin(dif)+2,end(dif)-1);
27    }
28};