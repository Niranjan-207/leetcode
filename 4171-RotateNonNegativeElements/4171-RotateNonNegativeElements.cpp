// Last updated: 4/4/2026, 10:57:55 PM
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> arr;
        for(int num:nums){
                if(num>=0) arr.push_back(num);
        }
            if(arr.empty()) return nums;
        int rotate=k%arr.size();

        reverse(arr.begin(),arr.begin()+rotate);
        reverse(arr.begin()+rotate,arr.end());
        reverse(arr.begin(),arr.end());

        int tem=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=arr[tem];
                tem++;
            }
        }
        return nums;
    }
};