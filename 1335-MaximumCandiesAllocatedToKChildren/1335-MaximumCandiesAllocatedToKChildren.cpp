// Last updated: 4/4/2026, 11:02:42 PM
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int l=1;
        int h=*max_element(begin(candies),end(candies));
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            long long cnt=0;
            for(int num:candies){
                cnt+=(num/mid);
            }
            if(cnt<k){
                h=mid-1;
            }else{
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};