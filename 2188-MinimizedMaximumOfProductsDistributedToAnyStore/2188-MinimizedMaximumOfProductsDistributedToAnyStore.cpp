// Last updated: 4/4/2026, 11:01:09 PM
class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=1;
        int h=*max_element(begin(quantities),end(quantities));
        int ans=0;
        while(l<=h){
            long long cnt=0;
            int mid=l+(h-l)/2;
            for(int num:quantities){
                if((num%mid)==0){
                    cnt+=num/mid;
                }else{
                    cnt+=(num/mid)+1;
                }
            }
            if(cnt>n){
                l=mid+1;
            }else{
                ans=mid;
                h=mid-1;
            }
            
        }
        return ans;
    }
};