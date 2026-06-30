// Last updated: 6/30/2026, 3:14:11 PM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int l=0,n=s.length();
5        int a=0,b=0,c=0;
6        int cnt=0;
7
8        for(int r=0;r<n;r++){
9            if(s[r]=='a')   a++;
10            else if(s[r]=='b')   b++;
11            else c++;
12            while(a>=1 && b>=1 && c>=1){
13                //cnt++;
14                cnt+=(n-r);
15
16                if(s[l]=='a')   a--;
17                else if(s[l]=='b')   b--;
18                else c--;
19                l++;
20            }
21        }
22        return cnt;
23    }
24};