class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        l=[]
        for i in accounts:
            n=0
            for j in i:
                n=n+j
            l.append(n)
        return max(l)

        