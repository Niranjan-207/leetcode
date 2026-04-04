// Last updated: 4/4/2026, 10:59:46 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int i=0;
        // if(n<3){
        //     for(int k=0;k<n;k++){
        //         sort(nums.begin(),nums.end());
        //         if(nums[k]==nums[k+1])
        //             return 1;
        //     }
        // }
        while(true){
            int carr[101]={0};
            if(i>n)
                return c;
            for(int j=i;j<n;j++){
                carr[nums[j]]++;
            }
            int flag=0;
            for(int j=0;j<100;j++){
                if(carr[j]>1){
                    flag++;
                    c++;
                    break;
                }
            }
            if(flag==1){
                i+=3;
            }else{
                return c;
            }
        }
    }
};