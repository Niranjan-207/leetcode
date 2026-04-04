// Last updated: 4/4/2026, 11:03:37 PM
class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start=0;
        int end=arr.length-1;
        int mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                end=mid-1;
            }else {
                start=mid+1;
            }
        }
        if(start>end){
            return start;
        }else{
            return end;
        }

    }
}