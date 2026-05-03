// Last updated: 5/3/2026, 11:15:39 AM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.length()!=goal.length())   return false;
5        s+=s;
6        return s.find(goal)!=string::npos;
7    }
8};