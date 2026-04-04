// Last updated: 4/4/2026, 10:58:42 PM
class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        sort(begin(words),end(words));
        int n=words.size();

        vector<vector<string>> ans;
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++){
                if(a!=b && words[a][0]==words[b][0]){
                    for(int c=0;c<n;c++){
                        if(c!=a && c!=b && words[a][3]==words[c][0]){
                            for(int d=0;d<n;d++){
                                if(a!=d && b!=d && c!=d && 
                                    words[d][0]==words[b][3]&&words[d][3]==words[c][3]){
                                        ans.push_back({words[a],words[b],words[c],words[d]});
                                    }
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};