// Last updated: 4/4/2026, 11:02:46 PM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(begin(arr),end(arr));
        int dif=INT_MAX;
        for(int i=1;i<n;i++){
            dif=min(dif,arr[i]-arr[i-1]);
        }

        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])==dif){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};