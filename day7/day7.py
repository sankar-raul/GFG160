# Stock Buy and Sell - Multiple Transaction Allowed
# Given an array prices[] of size n denoting the cost of stock on each day, the task is to find the maximum total profit if we can buy and sell the stocks any number of times.
# Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

class Solution:
    def maximumProfit(self, prices) -> int:
        res = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                res += prices[i] - prices[i - 1]
        return res

if __name__ == '__main__':
    prices = [100, 180, 260, 310, 40, 535, 695]
    print(Solution().maximumProfit(prices))