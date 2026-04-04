// Last updated: 4/4/2026, 11:00:15 PM
class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n=s1.length(),m=s2.length(),k=s3.length();
        int i=0;
        int ans=-1;
        while(i<n && i<m && i<k){
            if(s1[i]==s2[i] && s2[i]==s3[i]){
                i++;
            }else{
                break;
            }
        }
        if(i==0)    return -1;
        return (n-i + m-i + k-i);
    }
};