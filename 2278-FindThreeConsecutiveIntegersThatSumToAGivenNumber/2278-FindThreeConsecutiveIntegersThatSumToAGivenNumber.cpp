// Last updated: 4/4/2026, 11:00:59 PM
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x=num-3;
        if(x%3==0){
            long long temp=x/3;
            return {temp,temp+1,temp+2};
        }
        return {};
    }
};