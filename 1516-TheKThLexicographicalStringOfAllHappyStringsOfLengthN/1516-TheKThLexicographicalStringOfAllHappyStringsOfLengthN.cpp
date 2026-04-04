// Last updated: 4/4/2026, 11:02:17 PM
class Solution {
public:
   
    int cnt=0;
    string solve(string& s,int n,int k){

        if(s.length()==n){
            cnt++;
            if(cnt==k){
                return s;
            }
            return "";
        }
        
        for(char c:{'a','b','c'}){

            if(!s.empty() && s.back()==c){
                continue;
            }
            s.push_back(c);
            string temp=solve(s,n,k);
            if(temp!="")    return temp;
            s.pop_back();
        }
        return "";
    }
    string getHappyString(int n, int k) {
        int t=pow(2,n-1);
        if(t*3 < k) return "";

        string s="";
        return solve(s,n,k);
    }
};