// Stock Buy and Sell – Max one Transaction Allowed
// Given an array prices[] of length n, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.
// Note: Stock must be bought before being sold.

class Solution {
    // Function to find the maximum profit with one buy and one sell.
    maximumProfit(prices) {
        
        let res = 0, min = 0
        for (let i = 1; i < prices.length; i++) {
            if (prices[i] > prices[i - 1]) {
                res = Math.max(res, prices[i] - prices[min])
            } else {
                min = i
            }
        }
        return res
    }
}

prices = [7, 6, 4, 3, 1]
console.log(prices)
console.log(new Solution().maximumProfit(prices))