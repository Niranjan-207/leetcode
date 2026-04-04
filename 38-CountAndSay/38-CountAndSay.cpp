// Last updated: 4/4/2026, 11:07:39 PM
class Solution {
public:
    string count(string& s){
        string temp;
        temp.reserve(2*(s.length()));
        int i=0;
        while(i<s.length()){
            int cnt=1;
            char c=s[i];
            i++;
            while(i<s.length() && s[i]==c){
                cnt++;
                i++;
            }
            temp += to_string(cnt);
            temp.push_back(c);
            //temp+=to_string(cnt);
            //temp+=c;
        }
        //cout<<temp<<endl;
        return temp;
    }

    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
            s=count(s);
        }
        return s;
    }
};