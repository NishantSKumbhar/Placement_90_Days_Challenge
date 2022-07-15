"""
# My Code
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in range(0, len(nums)-1):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i,j]

"""
"""
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        
        innums = {}
        for i in range(len(nums)):
            x = target - nums[i]
            if nums[i] in innums:
                return [i,innums[nums[i]]]
            innums[x]=i

"""

# Best
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        target_tracker = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in target_tracker:
                return (i, target_tracker[complement])
            target_tracker[nums[i]] = i
        
        return (None, None)
            

s = Solution()
d = s.twoSum([2, 7, 11, 15], 9)
print(d)