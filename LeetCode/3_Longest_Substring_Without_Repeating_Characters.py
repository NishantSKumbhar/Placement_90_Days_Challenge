class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        d = {}
        s = []
        for i in s:
            if i not in s:
                s.append(i)
            else:
                d[len(s)] = s
                s.clear()
                s.append(i)

        print(d)


s1 = Solution()
s1.lengthOfLongestSubstring('abccabcbb')
#print(a, b)