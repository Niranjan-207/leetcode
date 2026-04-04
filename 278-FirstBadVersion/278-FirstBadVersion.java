// Last updated: 4/4/2026, 11:05:24 PM
/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int start=0;
        int end=n;
        int ans=0;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            boolean x=isBadVersion(mid);
            if(x==true){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
}