class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        l=[]
        for i in range(0,n,1):
            l.append(nums[i])
            l.append(nums[i+n])
        return l

        