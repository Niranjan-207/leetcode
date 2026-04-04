// Last updated: 4/4/2026, 10:58:52 PM
class Solution {
public:
    bool scoreBalance(string s) {
        int cst=0;
        for(char c:s){
            cst+=(c-'a'+1);
        }
        int tmp=0;
        for(int i=0;i<s.length();i++){
            tmp+=(s[i]-'a'+1);
                if(tmp*2==cst) return true;
        }
        return false;
    }
};