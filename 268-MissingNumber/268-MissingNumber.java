// Last updated: 4/4/2026, 11:05:25 PM
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        for(int i=0;i<n;i++){
            while (nums[i] >= 0 && nums[i] < n && nums[i] != nums[nums[i]]){
               int correctIndex = nums[i];
                int temp = nums[i];
                nums[i] = nums[correctIndex];
                nums[correctIndex] = temp;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j){
                return j;
            }
        }
        return n;
    }
}