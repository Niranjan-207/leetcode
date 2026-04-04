// Last updated: 4/4/2026, 11:05:42 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=0,cnt1=0,n2=0,cnt2=0;
        for(int &num:nums){
            if(n1==num) cnt1++;
            else if(n2==num)    cnt2++;
            else if(cnt1==0){
                n1=num;
                cnt1++;
            }else if(cnt2==0){
                n2=num;
                cnt2++;
            }else{
                cnt1--;cnt2--;
            }
        }
        cnt1=0;cnt2=0;
        for(int &num:nums){
            if(n1==num) cnt1++;
            else if(n2==num)    cnt2++;
        }

        int n=nums.size();
        vector<int> ans;
        if(cnt1>(n)/3) ans.push_back(n1);
        if(cnt2>(n)/3) ans.push_back(n2);
        return ans;
    }   
};