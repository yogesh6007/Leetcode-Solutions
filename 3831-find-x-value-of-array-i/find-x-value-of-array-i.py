class Solution(object):
    def resultArray(self, nums, k):
        result = [0] * k
        dp = [0] * k
        for num in nums:
            current = [0] * k
            rem = num % k
            current[rem] += 1
            for i in range(k):
                if dp[i]:
                    new_rem = (i * rem) % k
                    current[new_rem] += dp[i]
            for i in range(k):
                result[i] += current[i]
            dp = current
        return result