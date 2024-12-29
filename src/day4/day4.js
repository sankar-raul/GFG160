class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction. 
    rotateArr(arr, d) {
        const n = arr.length
        d %= n
        this.reverse(arr, 0, d - 1)
        this.reverse(arr, d, n - 1)
        this.reverse(arr, 0, n - 1)
    }
    reverse(arr, start, end) {
        while (start < end) {
            [arr[start], arr[end]] = [arr[end], arr[start]]
            start++
            end--
        }
    }
}

const li = [1, 2, 3, 4, 5]
const Answer = new Solution()
console.log(li)
const then = new Date()
Answer.rotateArr(li, 5)
console.log(li)
console.log(`Time: ${new Date() - then} ms`)