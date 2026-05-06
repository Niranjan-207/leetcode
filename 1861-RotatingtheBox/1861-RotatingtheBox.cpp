// Last updated: 5/6/2026, 10:49:45 AM
1class Solution {
2public:
3    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
4        int n=boxGrid.size();
5        int m=boxGrid[0].size();
6        //if(m==1)    return boxGrid;
7        vector<vector<int>> cnt(n,vector<int> (m,0));
8        for(int i=0;i<n;i++){
9            int count=0;
10            for(int j=0;j<m;j++){
11                if(boxGrid[i][j]=='#')  count++;
12                else if(boxGrid[i][j]=='*'){
13                    if(count>0 && j>0) cnt[i][j-1]=count;
14                    cnt[i][j]=-1;
15                    count=0;
16                }
17            }
18            if(count>0) cnt[i][m-1]=count;
19        }
20        
21        // for(int i=0;i<n;i++){
22        //     for(int j=0;j<m;j++){
23        //         cout<<cnt[i][j]<<" ";
24        //     }
25        //     cout<<endl;
26        // }
27        
28        for(int i=0;i<n;i++){
29            int j=m-1;
30            while(j>=0){
31                
32                if(cnt[i][j]==-1){
33                    j--;
34                    continue;
35                }
36                
37                if(cnt[i][j]>0){
38                    int ins=cnt[i][j];
39                    
40                    int k=j;
41
42                    while(k>=0 && ins>0 && cnt[i][k]!=-1){
43                        cnt[i][k]=1;
44                        k--;
45                        ins--;
46                    }
47
48                    
49
50                    j=k;
51                }
52                else{
53                    j--;
54                }
55            }
56            
57        }
58
59        vector<vector<char>> ans(m,vector<char> (n,'.'));
60        
61
62        for(int i=0;i<n;i++){
63            for(int j=0;j<m;j++){
64                if(cnt[i][j]==1){
65                    ans[j][n-i-1]='#';
66                }else if(cnt[i][j]==-1){
67                    ans[j][n-i-1]='*';
68                }
69            }
70           
71        }
72        return ans;
73    }
74};