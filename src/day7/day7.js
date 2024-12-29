// Stock Buy and Sell - Multiple Transaction Allowed
// Given an array prices[] of size n denoting the cost of stock on each day, the task is to find the maximum total profit if we can buy and sell the stocks any number of times.
// Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

class Solution {
    maximumProfit(prices) {
        let res = 0
        for (let i = 0; i < prices.length; i++) {
            if (prices[i] > prices[i - 1]) res += prices[i] - prices[i - 1]
        }
        return res
    }
}

const prices = [100, 180, 260, 310, 40, 535, 695]
console.log("Maximum profit ->", new Solution().maximumProfit(prices))