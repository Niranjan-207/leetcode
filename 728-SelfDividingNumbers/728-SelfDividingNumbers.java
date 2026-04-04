// Last updated: 4/4/2026, 11:04:07 PM
class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> list=new ArrayList<>();
        for(int i=left;i<=right;i++){
            boolean isSelfDividing = true;
            int num=i;
            while(num!=0){
                int digit=num%10;
                if (digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                num/=10;
            }if(isSelfDividing){
                list.add(i);
            }

        }return list;
    }
}