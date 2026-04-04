// Last updated: 4/4/2026, 11:02:14 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> arr(n);
        int max=candies[0];
        for(int i=1;i<n;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = (candies[i] + extraCandies >= max);
        }
        return arr;
    }
};