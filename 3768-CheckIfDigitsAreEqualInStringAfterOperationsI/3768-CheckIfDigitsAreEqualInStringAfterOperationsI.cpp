// Last updated: 4/4/2026, 10:59:37 PM
class Solution {

bool check(string& temp){
        if(temp.length()==1)    return false;
    for(int i=0;i<temp.length()-1;i++){
        if(temp[i]!=temp[i+1])
            return    false;
    }
    return true;
}

public:
    bool hasSameDigits(string s) {
        
        while(s.length()>1){
            string str="";
            for(int i=0;i<s.length()-1;i++){
                int temp = (s[i] - '0') + (s[i + 1] - '0');
                str.push_back((temp%10)+'0');
            }
            s=str;
            if(check(s))  return true;
        }
        return false;
    }
};