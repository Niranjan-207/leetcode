// Last updated: 4/4/2026, 10:59:03 PM
class Solution {
public:
    int distinctPoints(string s, int k) {
        vector<pair<int,int>> mov(s.size()+1,{0,0});
        int n=s.size();
        for(int i=0;i<n;i++){
            int x=0,y=0;
            if(s[i]=='U'){
                y=1;
            }else if(s[i]=='D'){
                y=-1;
            }else if(s[i]=='L'){
                x=-1;
            }else{
                x=1;
            }
            mov[i+1]={mov[i].first+x,mov[i].second+y};
        }
        pair<int,int> fin=mov[n];

        set<pair<int,int>> ans;
        for(int i=0;i+k<=n;i++){
            int x=mov[i+k].first-mov[i].first;
            int y=mov[i+k].second-mov[i].second;

            pair<int,int> temp={fin.first-x,fin.second-y};
            ans.insert(temp);
        }
        return ans.size();
    }
};