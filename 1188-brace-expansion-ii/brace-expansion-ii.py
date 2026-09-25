class Solution(object):
    def braceExpansionII(self, expression):
        n = len(expression)
        i = [0]
        def parse_expr():
            result = set()
            result |= parse_term()
            while i[0] < n and expression[i[0]] == ",":
                i[0] += 1
                result |= parse_term()
            return result
        def parse_term():
            result = {""}
            while i[0] < n and expression[i[0]] not in "},":
                current = parse_factor()
                result = {a + b for a in result for b in current}
            return result
        def parse_factor():
            if expression[i[0]] == "{":
                i[0] += 1
                result = parse_expr()
                i[0] += 1
                return result
            ch = expression[i[0]]
            i[0] += 1
            return {ch}
        return sorted(parse_expr())