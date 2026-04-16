// Last updated: 4/16/2026, 10:17:29 AM
1class Solution {
2public:
3    int closestTarget(vector<string>& words, string target, int startIndex) {
4        int ans=INT_MAX,n=words.size();
5        for(int i=0;i<n;i++){
6            if(words[i]==target){
7                int dif=abs(i-startIndex);
8                int dis=min(dif,n-dif);
9                ans=min(ans,dis);
10            }
11        }
12        return ans==INT_MAX?-1:ans;
13    }
14};