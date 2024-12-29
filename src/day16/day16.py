class Solution:
    #Function is to check whether two strings are anagram of each other or not.
    def areAnagrams(self, s1, s2):
        obj = {}
        for ch in s1:
            if obj.get(ch):
                obj[ch] += 1
            else:
                obj[ch] = 1
        for ch in s2:
            if not obj.get(ch):
                return False
            obj[ch] -= 1
        else:
            return True

if __name__ == '__main__':
    s1, s2 = "allergy", "allergic"
    print(Solution().areAnagrams(s1, s2))