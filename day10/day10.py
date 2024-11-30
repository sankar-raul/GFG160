#User function Template for python3

class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr):
        res = maxEnding = arr[0]
        n = len(arr)
        for i in range(1, n):
            maxEnding = arr[i] if maxEnding <= 0 else maxEnding + arr[i]
            res = max(maxEnding, res)
        return res
if __name__ == "__main__":
    arr = [2, 3, -8, 7, -1, 2, 3]
    print(Solution().maxSubArraySum(arr))