// Last updated: 4/4/2026, 10:58:17 PM
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            set<int> se;
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                se.insert(nums[j]);
                if(se.find(sum)!=se.end())  cnt++;
            }
        }
        return cnt;
    }
};