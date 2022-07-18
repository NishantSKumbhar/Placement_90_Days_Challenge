class Solution:
    # g_l = []
    # def is_there(self ,l):
    #     l.sort
    #     if len(l) == 0:
    #         g_l.append(l)
    #         return True
    #     else:
    #         for i in g_l:
    #             for j in range(len(l)):
    #                 if i[j] == l[j]:
    #                     return False
    #             g_l.append(i)    
    #         return True    

    def threeSum(self, nums: list[int]) -> list[list[int]]:
        f = []
        g_l = []
        for i in range(len(nums)-2):
            for j in range(i+1, len(nums)-1):
                for k in range(i+2, len(nums)):
                    if nums[i] + nums[j] + nums[k] == 0:
                        #f.append([nums[i], nums[j], nums[k]])
                        q = [nums[i], nums[j], nums[k]]

                        q.sort
                        if len(g_l) == 0:
                            g_l.append(q)
                            
                        else:
                            for i in g_l:
                                for j in range(len(q)):
                                    if i[j] == q[j]:
                                        continue
                                g_l.append(i)    
                            #return True

                        print(q)
        
        return q

s = Solution()
a = s.threeSum([-2,0,1,1,2])
print("Final : ", a)