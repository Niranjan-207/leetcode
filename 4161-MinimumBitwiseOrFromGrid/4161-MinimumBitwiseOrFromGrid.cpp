// Last updated: 4/4/2026, 10:57:59 PM
class Solution {
public:
    int minimumOR(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;

        for(int i=16;i>=0;i--){
            int ma=ans|((1<<i)-1);
            bool pz=true;

            for(auto& row:grid){
                bool ve=false;
                for(int ele:row){
                    if((ele|ma)==ma){
                        ve=true;
                        break;
                    }
                }
                if(!ve){
                    pz=false;
                    break;
                }
            }
            
            if(!pz){
                ans|=(1<<i);
            }
        }
        return ans;
    }
};