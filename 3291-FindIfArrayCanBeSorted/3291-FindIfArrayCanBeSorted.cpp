// Last updated: 4/4/2026, 11:00:08 PM
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(__builtin_popcount(nums[i])==__builtin_popcount(nums[i-1])){
                temp.push_back(nums[i]);
            }else{
                arr.push_back(temp);
                temp.clear();
                temp.push_back(nums[i]);
            }
        }
        arr.push_back(temp);
        for(vector<int>& a:arr){
            sort(begin(a),end(a));
        }
        for(int i=1;i<arr.size();i++){
            int n=arr[i-1].size();
            if(arr[i-1][n-1]>arr[i][0])   return false;
        }
        return true;
    }
};