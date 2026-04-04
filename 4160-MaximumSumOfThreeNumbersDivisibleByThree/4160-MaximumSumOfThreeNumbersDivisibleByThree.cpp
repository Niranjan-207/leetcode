// Last updated: 4/4/2026, 10:58:01 PM
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> arr(3);
        for(int num:nums){
            arr[num%3].push_back(num);
        }

        int ans=0;
        for(int i=0;i<3;i++){
            sort(arr[i].rbegin(),arr[i].rend());
        }
        // 000
        if(arr[0].size()>=3){
            ans=arr[0][0]+arr[0][1]+arr[0][2];
        }

        //012
        if(arr[0].size()>=1 && arr[1].size()>=1 && arr[2].size()>=1){
            ans=max(ans,arr[0][0]+arr[1][0]+arr[2][0]);
        }

        //111
        if(arr[1].size()>=3){
            ans=max(ans,arr[1][0]+arr[1][1]+arr[1][2]);
        }

        //222
        if(arr[2].size()>=3){
            ans=max(ans,arr[2][0]+arr[2][1]+arr[2][2]);
        }
        return ans;
    }
    
};