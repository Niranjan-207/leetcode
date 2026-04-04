// Last updated: 4/4/2026, 10:57:25 PM
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        vector<pair<int,int>> arr;
        for(int i=0;i<capacity.size();i++){
            arr.push_back({capacity[i],i});
        }
        sort(begin(arr),end(arr));
        int ans=0;
        for(int i=0;i<arr.size();i++){
                if(arr[i].first>=itemSize) {
                    return arr[i].second;
                }
        }
        return -1;
    }
};