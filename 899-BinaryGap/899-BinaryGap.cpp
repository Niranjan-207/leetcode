// Last updated: 4/4/2026, 11:03:33 PM
class Solution {
public:
    int binaryGap(int n) {
        vector<int> arr;
        int idx=0;
        while(n>0){
            if(n&1){
                arr.push_back(idx);
            }
            idx++;
            n>>=1;
        }
        int ans=0;
        if(arr.size()<=1)   return 0;
        for(int i=1;i<arr.size();i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        arr.clear();
        return ans;
    }
};