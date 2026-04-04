// Last updated: 4/4/2026, 11:03:16 PM
class Solution {
public:
    int fib(int n) {
        int arr[31];
        arr[1]=1;
        arr[2]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};