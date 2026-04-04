// Last updated: 4/4/2026, 10:58:11 PM
class Solution {
public:
    long long reverse(long long n){
            if(n==0) return 0;
        long long num=0;
        while(n>0){
            num=num*10+(n%10);
            n/=10;
        }
        return num;
    }
    
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<long long,int> mp;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mp[nums[i]].push_back(i);
        // }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            
            long long cur=nums[i];
            if(mp.count(cur)){
                int j=mp[cur];
                ans=min(ans,i-j);
            }
            long long find=reverse(nums[i]);
            mp[find]=i;
            // auto it=mp.find(find);
            // if(it==mp.end()) continue;

            // vector<int> arr=it->second;
            // auto l=upper_bound(arr.begin(),arr.end(),i);

            // if(l!=arr.end()){
            //     ans=min(ans,abs(i-*l));
            // }
            // if(l!=arr.begin()){
            //     auto p=l;
            //     p--;
            //     ans=min(ans,abs(i-*p));
            // }
            
           
        }
        if(ans==INT_MAX)return -1;
        return ans;
        
    }
};