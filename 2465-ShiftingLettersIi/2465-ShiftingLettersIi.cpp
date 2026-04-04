// Last updated: 4/4/2026, 11:00:42 PM
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.length();
        vector<long long> shf(n+1,0);
        for(auto& q:shifts){
            int x=q[0],y=q[1],z=q[2];
            if(z==0){
                shf[x]-=1;
                shf[y+1]+=1;
            }else{
                shf[x]+=1;
                shf[y+1]-=1;
            }   
        }
        for(int i=0;i<n+1;i++){
            if(i!=0)    shf[i]+=shf[i-1];    
        }

        for(int i=0;i<n;i++){
            int shift=(shf[i]%26+26)%26;
            s[i]=((s[i]-'a'+shift)%26)+'a';
        }
       
        return s;
    }
};