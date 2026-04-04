// Last updated: 4/4/2026, 10:59:06 PM
class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        set<int> s;
        for(int num:nums){
            sum+=num;
            s.insert(num);
        }
        double avg=(sum)/(n*1.0);

        int can=floor(avg)+1;
        can=max(can,1);
        while(s.count(can)){
            can++;
        }
        return can;
    }
};