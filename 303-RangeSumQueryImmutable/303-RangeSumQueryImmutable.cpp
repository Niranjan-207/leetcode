// Last updated: 4/4/2026, 11:05:17 PM
class NumArray {
public:
vector<int> arr;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==0){
                arr.push_back(nums[0]);
            }else{
                arr.push_back(arr.back()+nums[i]);
            }
        }
    }
    
    int sumRange(int left, int right) {
        return (left==0?arr[right]:(arr[right]-arr[left-1]));
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */