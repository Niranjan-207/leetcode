// Last updated: 4/4/2026, 10:59:22 PM
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int mod=1000000000+7;
        unordered_map<int,int> prev;
        unordered_map<int,int> nex;
        long long cnt=0;
        int n=nums.size();
        prev[nums[0]]++;
        for(int i=1;i<n;i++){
        
            nex[nums[i]]++;
        }

        for(int i=1;i<n;i++){
            int num=nums[i];
            long long find=2ll*num;
            nex[num]--;
            if(nex[num]==0) nex.erase(num);
            if(prev.count(find) && nex.count(find)){
                
                cnt=(1ll*cnt+(1ll*(prev[find]%mod)*(nex[find]%mod)%mod)%mod);  
            }
             prev[num]++;

        }
        return (int)(cnt%mod);
        
    }
};