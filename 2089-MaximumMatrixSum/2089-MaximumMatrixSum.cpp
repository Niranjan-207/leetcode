// Last updated: 4/4/2026, 11:01:22 PM
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int neg=0,minabs=INT_MAX;
        for(auto & row:matrix){
            for(int num:row){
                if(num<0)   neg++;
                int ab=abs(num);
                minabs=min(minabs,ab);
                sum+=ab;
            }
        }
        if(neg%2==0)    return sum;
        return (sum-(2ll*minabs));
    }
};