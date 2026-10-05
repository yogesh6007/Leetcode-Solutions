class Solution(object):
    def scoreOfParentheses(self, s):
        """
        :type s: str
        :rtype: int
        """
        score = 0
        depth = 0
        for i, c in enumerate(s):
            if c == '(':
                depth += 1
            else:
                depth -= 1
                if s[i - 1] == '(':  # found a "()" pair
                    score += 1 << depth  # 2^depth
        return score