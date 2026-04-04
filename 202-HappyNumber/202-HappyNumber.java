// Last updated: 4/4/2026, 11:06:04 PM
class Solution {
    public boolean isHappy(int n) {
        
        while(n>9){
            int sum=0;
            int digit=0;
            while(n!=0){
                digit=n%10;
                sum+=(digit*digit);
                n=n/10;
            }
             n=sum;
        }
           
        
        if(n==1 || n==7){
            return true;
        }else{
            return false;
        }
}
};
