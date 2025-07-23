class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        temp=list(nums)
        nums.sort()
        i=0
        j=len(nums)-1
        l,r=0,0
        while i<j:
            if nums[i]+nums[j]<target:
                i+=1
            elif nums[i]+nums[j]>target:
                j-=1
            else:
                l=nums[i]
                r=nums[j]
                break
        ans=[]
        for i in range(len(temp)):
            if temp[i]==l or temp[i]==r:
                ans.append(i)
        return ans


        
            