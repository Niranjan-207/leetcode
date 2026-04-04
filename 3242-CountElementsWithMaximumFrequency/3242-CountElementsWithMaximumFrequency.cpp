// Last updated: 4/4/2026, 11:00:10 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(101,0);
        int freq=0;
        for(int num:nums){
            arr[num]++;
            freq=max(freq,arr[num]);
        }
        int result=0;
        for(int num:arr){
            if(num==freq)   result+=num;
        }
        arr.clear();
        return result;
    }
};