// Last updated: 4/4/2026, 10:58:08 PM
class Solution {
public:
    long long totalScore(int hp, vector<int>& damage, vector<int>& requirement) {
        long long ans=0;
        int n=damage.size();
        
        // for(int i=0;i<n;i++){
        //     int php=hp;
        //     for(int j=i;j<n;j++){
        //         php-=damage[j];
        //         if(php>=requirement[j]) ans++;
        //         if(php<0) break;
        //     }
        // }
        // return ans;
        vector<long long> pre(n+1,0);
        for(int i=0;i<n;i++){
            
            pre[i+1]=pre[i]+damage[i];
        }

        for(int i=0;i<n;i++){
            long long pos=pre[i+1]+requirement[i]-hp;
            int idx=lower_bound(pre.begin(),pre.begin()+i+1,pos)-pre.begin();
            ans+=(i+1-idx);
        }
        return ans;
        
    }
};