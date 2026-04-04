// Last updated: 4/4/2026, 11:01:55 PM
class Solution {
public:
    bool possible(vector<int>& pos,int k,int m){
        int cnt=1;
        int las=pos[0];
        for(int i=1;i<pos.size();i++){
            if(pos[i]-las >= k){
                las=pos[i];
                cnt++;
            }
        }

        return cnt>=m;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(begin(position),end(position));
        int n=position.size();
        int l=1,h=position[n-1]-position[0];

        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(possible(position,mid,m)){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};