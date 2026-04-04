// Last updated: 4/4/2026, 11:00:55 PM
class Solution {
public:
    bool isEven(int num){
        string s=to_string(num);
        int sum=0;
        for(char c:s){
            sum+=(c-'0');
        }
        return (sum%2==0);
    }

    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(isEven(i))   cnt++;
        }
        return cnt;
    }
};