class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        f = []
        d = {}
        for i in range(len(nums)-2):
            for j in range(i+1, len(nums)-1):
                for k in range(i+2, len(nums)):
                    if nums[i] + nums[j] + nums[k] == 0:
                        d[i] = [nums[i], nums[j], nums[k]]
                        #f.append([nums[i], nums[j], nums[k]])
        for i in d:
            f.append(d[i])
        for i in range(len(f)-1):
            for j in range(i+1, len(f)):
                if f[i] == f[j]:
                    f.pop(i) 
        return f

s = Solution()
a = s.threeSum([-2,0,1,1,2])
print(a)