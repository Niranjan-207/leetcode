# Last updated: 6/25/2026, 12:09:10 AM
1class Solution:
2    def isPalindrome(self, x: int) -> bool:
3        s=str(x)
4        temp=s[::-1]
5        return s==temp