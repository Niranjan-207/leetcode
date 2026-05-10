// Last updated: 5/10/2026, 8:16:27 AM
1class Solution {
2public:
3    bool isLower(char c){
4        return (c>='a' && c<='z');
5    }
6    
7    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
8        string s="";
9        for(string chunk:chunks) s+=chunk;
10
11        set<string> q;
12        for(string qu:queries) q.insert(qu);
13
14        unordered_map<string,int> mp;
15        int i=0;
16        int n=s.length();
17        while(i<n){
18            if(!isLower(s[i])){
19                i++;
20                continue;
21            }
22
23            int j=i+1;
24            while(j<n){
25                if(isLower(s[j])) j++;
26                else if(s[j]=='-' && (j-1>=0) && isLower(s[j-1]) && (j+1<n) && isLower(s[j+1])){
27                    j++;
28                }else{
29                    break;
30                }
31            }
32            string temp=s.substr(i,j-i);
33            if(q.find(temp)!=q.end()){
34                mp[temp]++;
35            }
36            i=j;
37        }
38
39        vector<int> ans;
40        for(string t:queries){
41            ans.push_back(mp[t]);
42        }
43        return ans;
44    }
45};