// Last updated: 4/4/2026, 11:00:57 PM
class Solution {
public:
    int countOperations(int num1, int num2) {
        int c=0;
        while(num1>0 && num2>0){
            c+=num1/num2;
            num1%=num2;
            swap(num1,num2);
        }
        return c;
    }
};