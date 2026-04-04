// Last updated: 4/4/2026, 10:57:40 PM
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long cnt=0;
        int l=0;
        deque<int> ma,mi;
        for(int r=0;r<n;r++){
            while(!ma.empty() && nums[ma.back()]<=nums[r]) ma.pop_back();
            ma.push_back(r);

            while(!mi.empty() && nums[mi.back()]>=nums[r]) mi.pop_back();
            mi.push_back(r);

            while(!ma.empty() && !mi.empty() && ((long long)nums[ma.front()]-nums[mi.front()])*(r-l+1)>k){
                if(ma.front()==l) ma.pop_front();
                if(mi.front()==l) mi.pop_front();
                l++;
            }
            cnt+=(r-l+1);
        }
        return cnt;
    }
};