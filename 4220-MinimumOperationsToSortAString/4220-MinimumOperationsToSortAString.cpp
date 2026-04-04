// Last updated: 4/4/2026, 10:57:33 PM
class Solution {
public:
    int minOperations(string s) {

        bool sorted=true;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(s[i-1]>s[i]){
                sorted=false;
                break;
            }
        }
        if(sorted) return 0;
        if(n==2) return -1;
        char mic=s[0];
        char mac=s[0];
        for(char c:s){
            if(c>mac) mac=c;
            if(c<mic) mic=c;
        }
        if(s[0]==mic || s[n-1]==mac){
            return 1;
        }

        if(s[0]==mac && s[n-1]==mic){
            int minc=0,maxc=0;
            for(char c:s){
                if(c==mic) minc++;
                if(c==mac) maxc++;
            }

            if(maxc==1 && minc==1) return 3;
            // if(n==3){
                
            // }
        }
        return 2;
    }
};