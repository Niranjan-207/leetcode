// Last updated: 4/4/2026, 11:06:38 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)  return 0;
        set<int> se(nums.begin(),nums.end());
        int len=1;
        int ans=INT_MIN;

        for(int num:se){
            int ne=num+1;
            if(se.find(ne)!=se.end()){
                len++;
            }else{
                ans=max(len,ans);
                len=1;
            }
        }

        return ans;

    }
};