// Last updated: 4/4/2026, 11:04:51 PM
class Solution {
    public int hammingDistance(int x, int y) {
        int xor=x^y;
        int bit=0;
        int distance=0;
        while(xor>0){
            bit=xor&1;
            if(bit==1){
                distance++;
            }
            xor=xor>>1;
        }
        return distance;
    }
}