// Last updated: 4/4/2026, 11:03:03 PM
class Solution {
public:
    bool possible(vector<int>& weights,int k, int days){
       int cd=1;
       int temp=0;
       for(int w:weights){
            if(temp+w>k){
                temp=0;
                cd++;
            }
            temp+=w;
       }
       return cd<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(begin(weights),end(weights));
        int h=accumulate(begin(weights),end(weights),0);

        while(l<h){
            int mid=l+(h-l)/2;
            if(possible(weights,mid,days)){
                h=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};