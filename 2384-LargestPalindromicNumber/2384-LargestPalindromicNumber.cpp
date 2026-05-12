// Last updated: 5/12/2026, 10:51:38 PM
1class Solution {
2public:
3    string largestPalindromic(string num) {
4        vector<int> fre(10,0);
5        for(char c:num){
6            fre[c-'0']++;
7        }
8
9        string left="";
10        for(int dig=9;dig>=0;dig--){
11            int cnt=fre[dig]/2;
12            if(dig==0 && left=="") continue;
13            while(cnt--){
14                left+=(dig+'0');
15            }
16        }
17
18        string right=left;
19        reverse(begin(right),end(right));
20
21        string mid="";
22        
23        for(int dig=9;dig>=0;dig--){
24            if(fre[dig]&1){  mid+=(dig+'0');break;}
25        }
26        
27        string ans=left+mid+right;
28        if(ans=="")  return "0";
29        return ans;
30    }
31};