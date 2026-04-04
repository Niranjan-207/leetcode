// Last updated: 4/4/2026, 11:07:08 PM
class Solution {
public:
    bool check(vector<int>& fs,vector<int>& ft){
        for(int i=0;i<128;i++){
            if(fs[i]<ft[i])    return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        
        int n=s.length(),m=t.length();
        if(n<m) return "";
        int len=INT_MAX;

        vector<int> fs(128,0),ft(128,0);

        for(char c:t)   ft[c]++;
        int li=-1,ri=0;

        int l=0;
        for(int r=0;r<n;r++){
            fs[s[r]]++;
            while(l<n && check(fs,ft)){
                if( (r-l+1)<len){
                    li=l;len=r-l+1;
                    
                }   
                len=min(len,r-l+1);
                fs[s[l]]--;
                l++;
            }
            
        }
        return (li==-1?"":s.substr(li,len));
    }
};