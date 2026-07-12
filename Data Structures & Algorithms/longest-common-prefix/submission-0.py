class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        firstword = strs[0]

        for i in range(len(firstword)):
            chartomatch = firstword[i]

            for j in range(1, len(strs)):
                currentword = strs[j]

                if i >= len(currentword) or currentword[i] != chartomatch:
                    return firstword[:i]

        return firstword