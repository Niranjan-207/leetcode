// Last updated: 4/4/2026, 11:06:09 PM
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.length();
        if(n<10)    return {};
        unordered_map<char,int> mp={
            {'A',0},{'C',1},{'G',2},{'T',3}
        };

        unordered_set<int> seen,repeated;
        vector<string> ans;
        int hash=0;
        for(int i=0;i<n;i++){
            hash=((hash<<2)|mp[s[i]])&((1<<20)-1);

            if(i>=9){
                if(seen.count(hash))
                    repeated.insert(hash);
                else
                    seen.insert(hash);
            }
        }

        for(int num:repeated){
            string t(10,' ');
            for(int i=9;i>=0;i--){
                int v=num&3;
                t[i]="ACGT"[v];
                num>>=2;
            }
            ans.push_back(t);
        }
        return ans;
    }
};