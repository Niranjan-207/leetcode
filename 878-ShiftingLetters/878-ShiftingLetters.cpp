// Last updated: 4/4/2026, 11:03:38 PM
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        long long shf=0;
        
        for(int i=(n-1);i>=0;i--){
            shf+=shifts[i];
            s[i]=((s[i]-'a'+shf)%26)+'a';
            
        }

        // for(int i=(n-1);i>=0;i--){
            
        //     if(i==(n-1))    arr[i]=shifts[i];
        //     else    arr[i]=arr[i+1]+shifts[i];
        // }

        // for(int i=0;i<n;i++){
        //     s[i]=((s[i]-'a'+arr[i])%26)+'a';
        // }
        return s;
    }
};