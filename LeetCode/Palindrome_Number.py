class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        s = 0
        flag = x
        while x > 0:
            p = x % 10
            s = s*10 + p 
            x = x // 10

        if s == flag:
            return True
"""
Best :


class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        s = str(x)
        if s[::-1] == s:
            return True
        
"""

s = Solution()
a = s.isPalindrome(121)
print(a)
