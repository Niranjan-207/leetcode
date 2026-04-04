// Last updated: 4/4/2026, 11:07:17 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int i=digits.size()-1;
        int carry=1;
        
        while(carry || i>=0){
            int sum=carry;
            if(i>=0)    sum+=digits[i];

            
            carry=sum/10;
            ans.push_back(sum%10);
            i--;
        }
        
        reverse(begin(ans),end(ans));
        return ans;
    }
};