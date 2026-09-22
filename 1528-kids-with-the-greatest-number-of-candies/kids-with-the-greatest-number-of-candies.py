class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        l=[]
        for i in candies:
            n=i+extraCandies
            if n >= max(candies):
                l.append(True)
            else:
                l.append(False)
        return l
