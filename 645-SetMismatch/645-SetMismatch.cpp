// Last updated: 4/4/2026, 11:04:19 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> se;
        int missing,repeated,n=nums.size();
        for(int num:nums){
            if(se.find(num)!=se.end()){
                repeated=num;
                break;
            }else{
                se.insert(num);
            }
        }
        missing=((1ll*n*(n+1))/2)-(accumulate(begin(nums),end(nums),0))+repeated;
        return {repeated,missing};
    }
};