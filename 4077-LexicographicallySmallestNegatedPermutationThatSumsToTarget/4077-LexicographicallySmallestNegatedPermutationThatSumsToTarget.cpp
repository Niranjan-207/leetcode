// Last updated: 4/4/2026, 10:58:38 PM
class Solution {
public:
    vector<int> lexSmallestNegatedPerm(int n, long long target) {
        long long s=(1ll*n*(n+1))/2;
        long long req=s-target;
        
        
        if(req<0 || req%2==1) return {};
        req=(s-target)/2;
        
        vector<bool> arr(n+1,false);
        for(int i=n;i>=1;i--){
            if(req>0 && req>=i){
                arr[i]=true;
                req-=i;
            }
        }
        
        if(req!=0) return{};
        vector<int> ans;
        ans.reserve(n);
        for(int i=1;i<=n;i++){
            if(arr[i]==true){
                ans.push_back(i*(-1));   
            }else{
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};