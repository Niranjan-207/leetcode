// Last updated: 4/4/2026, 10:58:31 PM
class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n=technique1.size();
        long long ans=0;
        vector<int> dif(n);
        for(int i=0;i<n;i++){
            ans+=technique2[i];
            dif[i]=technique1[i]-technique2[i];
        }
        sort(dif.rbegin(),dif.rend());
        for(int i=0;i<k;i++){
            ans+=dif[i];
        }
        for(int i=k;i<n;i++){
            if(dif[i]>0) ans+=dif[i];
            else break;
        }
        return ans;
    }
};