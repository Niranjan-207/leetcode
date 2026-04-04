// Last updated: 4/4/2026, 11:08:02 PM
class Solution {
    public boolean isPalindrome(int x) {
        int temp =x;
        int rem=0;
        int sum=0;
        if(x<0){
            return false;
        }
        while(x != 0){
            rem=x%10;
            sum=(sum*10)+rem;
            x=x/10;
        }
        if(temp==sum){
            return true;
        }else{
            return false;
        }
    }
}