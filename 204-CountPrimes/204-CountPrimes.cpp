// Last updated: 4/4/2026, 11:05:56 PM
class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> arr(n+1,true);
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<=n;i++){
            if(arr[i]){
                for(int j=i+i;j<=n;j+=i){
                    arr[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(arr[i])  cnt++;
        }
        return cnt;
    }
};