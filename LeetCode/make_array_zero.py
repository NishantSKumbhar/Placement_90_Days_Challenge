def minimumOperations(nums: list[int]) -> int:
    if nums == [0]:
        return 0
    flag  = 0
    
    while(nums):
        for i in range(len(nums)):
            if nums[i] == 0:
                nums.pop(i)
        m = min(nums)
        for i in range(len(nums)):
            nums[i] = nums[i] - m
            
        flag += 0



minimumOperations([1,5,0,3,5])