// Last updated: 6/28/2026, 8:23:58 AM
1class Solution {
2public:
3    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& inter, int freeStart, int freeEnd) {
4        sort(begin(inter),end(inter));
5        vector<vector<int>> merged;
6        int pl=inter[0][0];
7        int pr=inter[0][1];
8        for(int i=1;i<inter.size();i++){
9            
10            int l=inter[i][0];
11            int r=inter[i][1];
12
13            if(l<=pr+1 ){
14                pr=max(r,pr);
15            }else{
16                merged.push_back({pl,pr});
17                pl=l;
18                pr=r;
19            }
20        }
21        merged.push_back({pl,pr});
22
23        vector<vector<int>> ans;
24        for(vector<int>& temp:merged){
25            int l=temp[0];
26            int r=temp[1];
27
28            // l --------- r
29            //.    free
30            if(r<freeStart || l>freeEnd){
31                ans.push_back({l,r});
32                continue;
33            }
34            if(l<freeStart){
35                // free|-----|
36                //.       l. ---- r
37                ans.push_back({l,freeStart-1});
38            }
39            if(r>freeEnd){
40                ans.push_back({freeEnd+1,r});
41            }
42        }
43        return ans;
44    }
45};