// Last updated: 4/4/2026, 11:00:07 PM
class Solution {
public:
    bool isPrefixAndSuffix(string a,string b){
        int al=a.length(),bl=b.length();
        if(bl<al)   return false;

        if(b.compare(0,al,a)==0 && b.compare(bl-al,bl,a)==0)   return true;
        return false;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixAndSuffix(words[i], words[j]))   cnt++;
            }
        }
        return cnt;
    }
};