// Last updated: 4/4/2026, 11:01:42 PM
class Solution {
int ab(string& s){
    string str;
    int cnt=0;
    for(char c:s){
        str+=c;
        int n=str.length();
        if(n>=2 && str[n-2]=='a' && str[n-1]=='b'){  cnt++;str.erase(n-2,2);}
    }
    s=str;
    return cnt;
}

int ba(string& s){
    string str;
    int cnt=0;
    for(char c:s){
        str+=c;
        int n=str.length();
        if(n>=2 && str[n-2]=='b' && str[n-1]=='a'){  cnt++;str.erase(n-2,2);}
    }
    s=str;
    return cnt;
}

public:
    int maximumGain(string s, int x, int y) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(nullptr);
        int total=0;
        if(x>y){
            total=(x*(ab(s)))+ (y * ba(s));
        }else
            total=(y*ba(s)) + (x*ab(s));
        return total;
    }
};