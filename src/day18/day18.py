class Solution:
    def __constructLps(self, pat, lps):
        len_ = 0
        m = len(pat)
        lps[0] = 0
        i = 1
        while i < m:
            if pat[i] == pat[len_]:
                len_ += 1
                lps[i] = len_
                i += 1
            else:
                if len_ != 0:
                    len_ = lps[len_ - 1]
                else:
                    lps[i] = 0
                    i += 1

    def search(self, pat, txt):
        n = len(txt)
        m = len(pat)
        lps = [0] * m
        res = []
        self.__constructLps(pat, lps)
        i = 0
        j = 0

        while i < n:
            if txt[i] == pat[j]:
                i += 1
                j += 1
                if j == m:
                    res.append(i - j)
                    j = lps[j - 1]
            else:
                if j != 0:
                    j = lps[j - 1]
                else:
                    i += 1
        return res
    
txt, pat = "aabaacaadaabaaba", "aaba"
print(Solution().search(pat, txt))