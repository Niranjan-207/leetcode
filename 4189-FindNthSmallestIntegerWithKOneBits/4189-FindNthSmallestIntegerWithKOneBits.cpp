// Last updated: 4/4/2026, 10:57:45 PM
class Solution {
public:
    unsigned long long ncr[64][64];
    void fill(){
        for(int i=0;i<64;i++){
            ncr[i][0]=1;
            ncr[i][i]=1;
            for(int j=1;j<i;j++){
                ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
            }
        }
    }
    
    long long nthSmallest(long long n, int k) {
        fill();
        long long ans=0;
        
        for(int i=62;i>=0;i--){
            if(k==0)break;
            

            if(n>ncr[i][k]){
                n-=ncr[i][k];
                ans|=(1ll<<i);
                k--;
            }
        }
        return ans;
    }
};