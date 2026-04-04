// Last updated: 4/4/2026, 11:06:08 PM
class Solution {
    public int hammingWeight(int n) {
        int count=0;
        while(n>0){
            count++;
            n=n&(n-1);
        }return count;
    }
}