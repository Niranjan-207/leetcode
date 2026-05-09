// Last updated: 5/9/2026, 8:36:08 PM
1class Solution {
2public:
3    int minFlips(string s) {
4        int n=s.length();
5
6        int c1=0,c0=0,f1=-1,l1=-1;
7        for(int i=0;i<n;i++){
8            if(s[i]=='1'){
9                c1++;
10                if(f1==-1) f1=i;
11                l1=i;
12            }else{
13                c0++;
14            }
15        }
16
17        if(c1<=1) return 0;
18        if(c1==n || c0==0) return 0;
19
20        int ans=c0;
21        ans=min(ans,c1-1);
22
23        int zo=0;
24        for(int i=0;i<f1;i++) if(s[i]=='0') zo++;
25        for(int i=l1+1;i<n;i++) if(s[i]=='0') zo++;
26
27        ans=min(ans,(c1-2)+zo);
28        return ans;
29    }
30};