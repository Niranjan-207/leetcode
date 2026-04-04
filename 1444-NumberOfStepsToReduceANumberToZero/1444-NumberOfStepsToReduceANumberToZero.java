// Last updated: 4/4/2026, 11:02:34 PM
class Solution {
    public int numberOfSteps(int num) {
        if(num==0) return 0;
        int count=0;
        while(num!=0){
            int bit=num&1;
            if(bit==1){
                count+=2;
            }else{
                count+=1;
            }num>>=1;
        }
        return count-1;
    }
}