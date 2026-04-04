// Last updated: 4/4/2026, 11:02:23 PM
class Solution {
    public boolean checkIfExist(int[] arr) {
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length;j++){
                if (i!=j && arr[i]==arr[j]*2){
                    return true;
                }

            }
        }
        return false;
        }
        
    }