// Last updated: 4/4/2026, 11:04:16 PM
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r=arr.size()-1;
        while(r-l >=k){
            if(abs(arr[r]-x) < abs(arr[l]-x)){
                l++;
            }else{
                r--;
            }
        }
        vector<int> ans;
        for(int i=l;i<=r;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};