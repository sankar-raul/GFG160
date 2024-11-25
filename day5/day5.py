""" Next Permutation
Given an array arr[] of size n, the task is to print the lexicographically 
next greater permutation of the given array. If there does not exist any 
greater permutation, then find the lexicographically smallest permutation of the given array.
"""

class Solution:
    def nextPermutation(self, arr):
        n = len(arr)
        pivot = -1
        for i in range(n - 2, -1, -1):
            if arr[i] < arr[i + 1]:
                pivot = i
                break
        else:
            arr.reverse()
            return
        
        for i in range(n - 1, pivot, -1):
            if arr[pivot] < arr[i]:
                arr[i], arr[pivot] = arr[pivot], arr[i]
                break
        pivot += 1
        n -= 1
        while pivot < n:
            arr[pivot], arr[n] = arr[n], arr[pivot]
            pivot += 1
            n -= 1
    
if __name__ == "__main__":
    arr = [2, 4, 1, 7, 5, 0]
    print(*arr, sep=' ')
    Solution().nextPermutation(arr)
    print(*arr, sep=' ')