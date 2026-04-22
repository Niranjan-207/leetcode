// Last updated: 4/22/2026, 10:19:24 PM
1class Solution {
2public:
3    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
4        vector<string> ans;
5        int len=queries[0].length();
6        for(int i=0;i<queries.size();i++){
7            bool found=false;
8            for(int j=0;j<dictionary.size();j++){
9                int cnt=0;
10                
11                for(int k=0;k<len;k++){
12                    if(queries[i][k]!=dictionary[j][k]) cnt++;
13                    if(cnt>3)   break;
14                }
15                if(cnt<3){
16                    found=true;
17                    break;
18                }   
19            }
20            if(found)   ans.push_back(queries[i]);
21        }
22        return ans;
23    }
24};