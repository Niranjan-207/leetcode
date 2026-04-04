// Last updated: 4/4/2026, 11:05:27 PM
class Solution {
    public int addDigits(int num) {
        int digit;
        int sum=0;
        while(num != 0 ){
            digit=num%10;
            sum+=digit;
            num/=10;
        }if(sum<10){
            return sum;
        }
        return addDigits(sum);
    }
}