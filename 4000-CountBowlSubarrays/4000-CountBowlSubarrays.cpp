// Last updated: 4/4/2026, 10:59:10 PM
class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;

        vector<int> lg(n,-1);
        vector<int> rg(n,-1);

        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && nums[s.top()]<=nums[i]) s.pop();

            if(!s.empty()){
                lg[i]=s.top();
            }
            s.push(i);
        }

        stack<int> s1;
        for(int i=n-1;i>=0;i--){
            while(!s1.empty() && nums[s1.top()]<=nums[i]) s1.pop();

            if(!s1.empty()){
                rg[i]=s1.top();
            }
            s1.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            if(lg[i]!=-1 && rg[i]!=-1) ans++;
        }
        return ans;
    }
};