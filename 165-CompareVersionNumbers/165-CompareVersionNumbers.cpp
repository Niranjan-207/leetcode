// Last updated: 4/4/2026, 11:06:18 PM
class Solution {
public:
    int compareVersion(string version1, string version2) {
       int p1=0,p2=0;
       int n=version1.length();
       int m=version2.length();

       while(p1<n || p2<m){
        int num1=0,num2=0;

        while(p1<n && version1[p1]!='.'){
            num1=num1*10+(version1[p1++]-'0');
            
        }

        while(p2<m && version2[p2]!='.'){
            num2=num2*10+(version2[p2++]-'0');
            
        }
        p1++;p2++;
        if(num1>num2)   return 1;
        else if(num1<num2)  return -1;
       }

       return 0;
    }
};