// Last updated: 4/4/2026, 11:00:41 PM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> se;
        int cnt=0;
        for(int num:nums){
            if(num%2==0){
                se[num]+=1;
                cnt=max(cnt,se[num]);
            }
        }
        for(auto& [a,b]:se){
            if(b==cnt)  return a;
        }
        return -1;
    }
};