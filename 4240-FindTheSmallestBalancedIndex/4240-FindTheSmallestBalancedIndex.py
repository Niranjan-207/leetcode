# Last updated: 4/4/2026, 10:57:29 PM
class Solution:
    def smallestBalancedIndex(self, nums: list[int]) -> int:
        n=len(nums)
        if(n==0):
            return -1;

        sp=[1]*n
        cp=1;

        for i in range(n-1,0,-1):
            cp*=nums[i]
            if(cp>10**15):
                cp=10**15+7
            sp[i-1]=cp

        ls=0
        for i in range(n):
            rp=sp[i] if i<n-1 else 1
            if(ls==rp): 
                return i
            ls+=nums[i]

        return -1
            