class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n=len(nums)
        ans=list(nums)
        for i in range(n):
            ans.append(nums[i]);
        return ans
        