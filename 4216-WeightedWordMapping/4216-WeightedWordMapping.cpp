// Last updated: 4/4/2026, 10:57:35 PM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(string word:words){
            int sc=0;
            for(auto c:word){

                sc+=weights[c-'a'];
            }
            sc%=26;
            s+=(26-sc+'a'-1);
        }
        return s;
    }
};