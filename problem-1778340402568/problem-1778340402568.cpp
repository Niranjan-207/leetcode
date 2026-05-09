// Last updated: 5/9/2026, 8:56:42 PM
1class Solution {
2public:
3    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
4        set<vector<int>> se;
5        vector<vector<int>> q;
6        for(vector<int> point:points){
7            if(se.find(point)==se.end()){
8                q.push_back(point);
9                se.insert(point);
10            }
11        }
12
13        if(se.count(target)) return 0;
14
15        for(int iter=1;;iter++){
16            int qs=q.size();
17            vector<vector<int>> temp;
18            for(int i=0;i<qs;i++){
19                for(int j=i+1;j<qs;j++){
20                    vector<int> cur={
21                        (q[i][0]+q[j][0])/2,
22                        (q[i][1]+q[j][1])/2,
23                        (q[i][2]+q[j][2])/2
24                    };
25
26                    if(!se.count(cur)){
27                        se.insert(cur);
28                        temp.push_back(cur);
29                        if(cur==target) return iter;
30                    }
31                }
32            }
33            if(temp.size()==0) return -1;
34            for(vector<int> t:temp) q.push_back(t);
35        }
36        return -1;
37    }
38    
39};