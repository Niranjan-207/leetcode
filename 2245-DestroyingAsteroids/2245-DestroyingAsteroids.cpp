// Last updated: 4/4/2026, 11:01:03 PM
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long total=mass;
        int mi=*min_element(asteroids.begin(),asteroids.end());
        int ma=*max_element(asteroids.begin(),asteroids.end());
        vector<int> cnt(ma-mi+1,0);
        for(int& ast:asteroids){
            if(total>=ast)  total+=ast;
            else{
                cnt[ast-mi]++;
            }
        }
        for(int i=0;i<(ma-mi+1);i++){
            if(cnt[i]>0){
                if(total>=(i+mi))
                    total+=(1ll*(cnt[i])*(i+mi));
                else
                    return false;
            }
        }
        return true;
    }
};