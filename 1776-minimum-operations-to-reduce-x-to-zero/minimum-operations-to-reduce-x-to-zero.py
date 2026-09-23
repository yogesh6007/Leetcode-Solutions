class Solution(object):
    def minOperations(self, nums, x):
        """
        :type nums: List[int]
        :type x: int
        :rtype: int
        """
        target = sum(nums) - x
        mx, t, j = -1, 0, 0
        for i, v in enumerate(nums):
            t += v
            while j <= i and t > target:
                t -= nums[j]
                j += 1
            if t == target:
                mx = max(mx, i - j + 1)
        return -1 if mx == -1 else len(nums) - mx   