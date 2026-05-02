// Last updated: 5/2/2026, 12:28:28 PM
1class Solution {
2public:
3// set<char> se={'0','1','8','2','5','6','9'};
4
5    int rotatedDigits(int n) {
6        set<char> se={'3','4','7'};
7        set<char> sr={'0','1','8'};
8        int cnt=0;
9        for(int i=1;i<=n;i++){
10            string s=to_string(i);
11            bool flag=true;
12            bool can=false;
13            for(char& c:s){
14                if(sr.find(c)==sr.end())   can=true;
15                if(se.find(c)!=se.end()){
16                    flag=false;
17                    break;
18                }
19            }
20            
21            if(flag && can){    cout<<i<<" ";cnt++;}
22        }
23        return cnt;
24    }
25
26};