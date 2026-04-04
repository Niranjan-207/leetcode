// Last updated: 4/4/2026, 10:58:12 PM
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long> cst(26,0);
        long long n=cost.size();
        for(int i=0;i<n;i++){
            cst[s[i]-'a']+=cost[i];
        }
        long long ans=LLONG_MAX;
        for(int i=0;i<26;i++){
            long long temp=0;
            for(int j=0;j<26;j++){
                if(i!=j){
                    temp+=cst[j];
                }
            }
            ans=min(ans,temp);
        }
        return ans;
    }
};