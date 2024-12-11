class Solution:
    def runningSum(self, nums):
        ans=[0]*len(nums)
        for i in range(len(nums)):
            ans[i]=sum(nums[:i+1])
        return ans