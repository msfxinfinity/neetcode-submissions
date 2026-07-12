class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        counts = {}
        for i in range(len(s)):
            char = s[i]
            if char in counts:
                counts[char] += 1
            elif char not in counts:
                counts[char] = 1
        
        for i in range(len(t)):
            if t[i] in counts:
                counts[t[i]] -= 1
            else:
                return False
        
        for char in counts:
            if counts[char] != 0:
                return False
        
        return True
        
