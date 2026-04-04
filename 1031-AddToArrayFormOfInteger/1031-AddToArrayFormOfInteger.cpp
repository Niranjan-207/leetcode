// Last updated: 4/4/2026, 11:03:11 PM
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int p1=num.size()-1;
        int carry=0;
        while(p1>=0 || k!=0){
            int d1=0,d2=0;
            if(p1>=0)   d1=num[p1--];
            if(k!=0){
                d2=k%10;
                k/=10;
            }

            int s=d1+d2+carry;
            int d=s%10;
                s/=10;
                carry=s;
                ans.push_back(d);
            // if(s>9){
            //     int d=s%10;
            //     s/=10;
            //     ans.push_back(d);
            //     carry=s;
            // }else{
            //     carry=0;
            //     ans.push_back(s);
            // }
        }
        if(carry!=0)    ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};