class Solution {
    pushZerosToEnd(arr) {
        let nonZero = 0
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] != 0) arr[nonZero++] = arr[i]
        }
        while (nonZero < arr.length) {
            arr[nonZero++] = 0
        }
        return arr
    }
}

const now = new Date()
console.log(new Solution().pushZerosToEnd([0, 0]))
const time = new Date() - now
console.log(`Time: ${time} ms`)