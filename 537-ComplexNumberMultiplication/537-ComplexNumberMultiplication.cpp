// Last updated: 4/4/2026, 11:04:30 PM
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d;
        int sidx=num1.find('+');
        int iidx=num1.length();
        a=stoi(num1.substr(0,sidx));
        b=stoi(num1.substr(sidx+1,iidx-1));

        sidx=num2.find('+');
        iidx=num2.length();
        c=stoi(num2.substr(0,sidx));
        d=stoi(num2.substr(sidx+1,iidx-1));
        
        string real=to_string(((a*c)-(b*d)));
        string img=to_string(((a*d)+(c*b)));
        return real+"+"+img+"i";
    }
};