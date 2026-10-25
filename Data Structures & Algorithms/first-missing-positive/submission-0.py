class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n=len(nums)
        contains_1 = False
        for i in range(n):
            if nums[i]==1:
                contains_1=True
            if nums[i]<=0 or nums[i]>n : # to check [1,n] and replace them with 1
                nums[i]=1
        if contains_1==False:
            return 1
        for i in range(n):
            num = abs(nums[i])
            idx = num-1

            if nums[idx]>0:
                nums[idx] *= -1
        for i in range(n):
            if(nums[i]>0):
                return i+1
    
        return n+1
