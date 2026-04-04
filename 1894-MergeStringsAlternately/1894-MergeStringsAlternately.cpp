// Last updated: 4/4/2026, 11:01:38 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int p1=0;int p2=0;
        int n=word1.length(),m=word2.length();
        while(p1<n && p2<m){
            s+=word1[p1++];
            s+=word2[p2++];
        }
        while(p1<n) s+=word1[p1++];
        while(p2<m) s+=word2[p2++];
        return s;
    }
};