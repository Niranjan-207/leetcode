// Last updated: 4/4/2026, 10:59:24 PM
class Solution {
public:
    int maxFreqSum(string s) {
        set<char> se={'a','e','i','o','u'};
        unordered_map<char,int> us;
        for(char& c:s){
            us[c]++;
        }

        int vc=0,cc=0;

        for(auto& [ch,cnt]:us){
            if(se.find(ch)!=se.end()){
                vc=max(vc,cnt);
            }else{
                cc=max(cc,cnt);
            }
        }
        return (vc+cc);
    }
};