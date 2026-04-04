// Last updated: 4/4/2026, 11:02:33 PM

class Solution {
    public int findNumbers(int[] nums) {
        int total_count=0;
        for(int i=0;i<nums.length;i++){
            int n=nums[i];
            int count=0;
            
            while(n!=0){
                count++;
                n=n/10;
            }
            if(count%2==0){
                total_count++;
            }
        }
        return total_count;
    }
}