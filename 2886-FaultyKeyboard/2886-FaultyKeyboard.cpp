// Last updated: 4/4/2026, 11:00:22 PM
class Solution {
public:
    string finalString(string s) {
        auto ptr=s.begin();

        for(char ch:s){
            if(ch=='i'){
                std::reverse(s.begin(),ptr);
            }else{
                *ptr++ =ch;
            }
        }
        s.erase(ptr,s.end());
        return s;
    }
};