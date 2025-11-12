# week01_2.py LeetCode 學習計畫 Python 版本 for 迴圈
# LeetCode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        # sadbutsad
        # sad i:0
        #  sad i:1
        # ....
        #       sad i:6
        for i in range(H-N+1):
            if haystack[i:i+N] == needle:
                return i

        return -1



# week01_2.py LeetCode 學習計畫 Python 版本 find
# LeetCode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
