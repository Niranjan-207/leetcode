// Last updated: 4/4/2026, 10:59:04 PM
class Solution {
public:
    long long minMoves(vector<int>& balance) {
        long long nsum=0,nidx=-1;
        long long psum=0;
        int n=balance.size();
        for(int i=0;i<n;i++){
            if(balance[i]<0){
                nsum=balance[i];
                nidx=i;
            }else{
                psum+=balance[i];
            }
        }

        if(abs(nsum)>psum ) return -1;
        if(nidx==-1) return 0;
        long long req=-nsum;
        vector<pair<int,long long>> temp;
        for(int i=0;i<n;i++){
            if(i==nidx || balance[i]==0) continue;
            int dis=min(abs(i-nidx),n-abs(i-nidx));
            temp.push_back({dis,balance[i]});
        }
        sort(temp.begin(),temp.end());
        long long ans=0;
        for(auto& [a,b]:temp){
            if(req==0) break;
            long long can=min(b,req);
            ans+=(can*a);
            req-=can;
        }
        return ans;
        
        
    }
};