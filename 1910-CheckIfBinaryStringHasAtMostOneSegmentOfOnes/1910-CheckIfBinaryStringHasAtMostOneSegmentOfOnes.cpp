// Last updated: 4/4/2026, 11:01:36 PM
class Solution {
public:
    bool checkOnesSegment(string s) {
        int cnt=0;
        int len=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                len++;
            }else{
                if(len>0) cnt++;
                len=0;
                
            }
           
        }
        if(len>0) cnt++;
        return (cnt==1);
    }
};