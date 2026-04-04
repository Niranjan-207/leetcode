// Last updated: 4/4/2026, 10:57:41 PM
class Solution {
public:
    string reverseByType(string s) {
        vector<char> ch,sy;
        for(char chr:s){
            if(chr>='a' && chr<='z'){
                ch.push_back(chr);
            }else{
                sy.push_back(chr);
            }
        }
        reverse(begin(ch),end(ch));
        reverse(begin(sy),end(sy));
        int i=0,j=0;
        for(char& chr:s){
            if(chr>='a' && chr<='z'){
                chr=ch[i++];
            }else{
                chr=sy[j++];
            }
        }
        return s;
    }
};