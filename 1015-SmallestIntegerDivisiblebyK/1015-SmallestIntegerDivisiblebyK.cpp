// Last updated: 4/27/2026, 1:01:30 AM
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int> ans;
5        for(int i=left;i<=right;i++){
6            string num=to_string(i);
7            int j=0;
8            for(;j<num.length();j++){
9                int dig=num[j]-'0';
10                if(dig==0 || i%dig!=0)   break;
11                
12            }
13            if(j==num.length()) ans.push_back(i);
14        }
15        return ans;
16    }
17};