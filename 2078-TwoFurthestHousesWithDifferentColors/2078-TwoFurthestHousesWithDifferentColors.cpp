// Last updated: 4/20/2026, 10:05:56 PM
1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int l=0,n=colors.size(),r=n-1;
5        for(int i=0;i<n;i++){
6            if(colors[i]!=colors[n-1]){
7                l=i;
8                break;
9            }
10        }
11        for(int i=n-1;i>=0;i--){
12            if(colors[i]!=colors[0]){
13                r=i;
14                break;
15            }
16        }
17        return max(r,n-l-1);
18    }
19};
20