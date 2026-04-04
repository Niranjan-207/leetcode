// Last updated: 4/4/2026, 11:02:53 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ma=-1;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=(n-1);i>=0;i--){
            ans[i]=ma;
            ma=max(arr[i],ma);
        }
        return ans;
    }
};