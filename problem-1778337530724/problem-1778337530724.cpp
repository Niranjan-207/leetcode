// Last updated: 5/9/2026, 8:08:50 PM
1class Solution {
2public:
3    vector<int> scoreValidator(vector<string>& events) {
4        int score=0;
5        int cnt=0;
6        for(string s:events){
7            if(s=="W") cnt++;
8            else if(s=="WD") score++;
9            else if(s=="NB") score++;
10            else score+=(stoi(s));
11            if(cnt==10) break;
12        }
13        return {score,cnt};
14    }
15};