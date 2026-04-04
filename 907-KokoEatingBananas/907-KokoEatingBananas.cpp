// Last updated: 4/4/2026, 11:03:32 PM
class Solution {
public:
    bool possible(vector<int>& piles,int k, int h){
        int t=0;
        for(int num:piles){
            if(num%k==0){
                t+=(num/k);
            }else{
                t+=((num/k)+1);
            }
           
        }
        return t<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(begin(piles),end(piles));
        int k=0;
        while(l<r){
            int mid=l+(r-l)/2;
            if(possible(piles,mid,h)){
                // k=mid;
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};