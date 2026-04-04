// Last updated: 4/4/2026, 11:02:09 PM
class Solution {
public:
    bool isVowel(char& c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    int maxVowels(string s, int k) {
        int n=s.length();
        int cnt=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))   cnt++;
        }
        int ans=cnt;
        for(int r=k;r<n;r++){
            if(isVowel(s[r])){
                cnt++;
            }
            if(isVowel(s[r-k])){
                cnt--;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};