class Solution:
    
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        l = []
        for i in range(len(nums)-2):
            for j in range(i+1, len(nums)-1):
                for k in range(j+1, len(nums)):
                    if (nums[i] + nums[j] + nums[k]) == 0:
                        #print([nums[i], nums[j], nums[k]])
                        a = sorted([nums[i], nums[j], nums[k]])
                        
                        flag = 0
                        for e in l:
                            if a == e:
                                flag += 1
                        if flag == 0:
                            l.append(a)

                            

        return l

s = Solution()
a = s.threeSum([-1,0,1,2,-1,-4])
print("Final : ", a)