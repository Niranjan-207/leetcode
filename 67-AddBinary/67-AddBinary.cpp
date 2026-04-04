// Last updated: 4/4/2026, 11:07:16 PM
class Solution {
public:
    string addBinary(string a, string b) {
        int dif=a.length()-b.length();
        if(dif>0){
            b=string(abs(dif),'0')+b;
        }else{
            a=string(abs(dif),'0')+a;
        }

        char carry=0;
        string ans="";
        for(int i=a.size()-1;i>=0;i--){
            int cnt=0;
            if(a[i]=='1')  cnt++;
            if(b[i]=='1')   cnt++;
            if(carry=='1')    cnt++;
            
            carry=(cnt>1?'1':'0');

            if(cnt&1)   ans+='1';
            else    ans+='0';
        }
        if(carry!='0')  ans+=carry;
        reverse(begin(ans),end(ans));
        return ans;
    }
};