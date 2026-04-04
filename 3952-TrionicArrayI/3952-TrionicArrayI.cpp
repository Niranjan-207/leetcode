// Last updated: 4/4/2026, 10:59:16 PM
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
    
        int n=nums.size();
        //if(n==3 && nums[1]>)
        int i=1;
        bool run=false;
        while(i<n && nums[i]>nums[i-1]){    i++;run=true;}
        if(run==false || i==n)    return false;

        run=false;
        while(i<n && nums[i-1]>nums[i]){    i++;run=true;}
        if(run==false || i==n)    return false;

        run=false;
        while(i<n && nums[i]>nums[i-1]){    i++;run=true;}
        if(i!=n)    return false;
        return run;
    }
};