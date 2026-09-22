class Solution(object):
    def runningSum(self, nums):
        ans=0
        l=[]
        for i in nums:
            ans=ans+i
            l.append(ans)
        return l