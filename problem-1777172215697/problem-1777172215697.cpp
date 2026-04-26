// Last updated: 4/26/2026, 8:26:55 AM
1class Solution {
2public:
3    bool vowel(char c){
4        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
5    }
6    
7    string sortVowels(string s) {
8        map<char,pair<int,int>> mp;
9        for(int i=0;i<s.length();i++){
10            char c=s[i];
11            if(vowel(c)){
12                if(mp.find(c)==mp.end()){
13                    mp[c]={1,i};
14                }else{
15                    mp[c].first++;
16                }
17            }
18        }
19
20        vector<pair<char,pair<int,int>>> arr;
21        for(auto& [c,sec]:mp){
22            
23            arr.push_back({c,sec});
24        }
25        sort(begin(arr),end(arr),[](auto& a,auto& b){
26            if(a.second.first!=b.second.first){
27                return a.second.first>b.second.first;
28            }
29            return a.second.second<b.second.second;
30        });
31        string temp="";
32        for(auto& [c,sec]:arr){
33            auto [cnt,idx]=sec;
34            while(cnt--){
35                temp+=c;
36            }
37        }
38        int j=0;
39        for(int i=0;i<s.length();i++){
40            char c=s[i];
41            if(vowel(c)){
42                s[i]=temp[j++];
43            }
44        }
45        return s;
46    }
47};