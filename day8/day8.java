// Stock Buy and Sell – Max one Transaction Allowed
// Given an array prices[] of length n, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.
// Note: Stock must be bought before being sold.

package day8;
class day8 {
    public static int maximumProfit(int prices[]) {
        int res = 0, min = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > prices[min])
                res = Math.max(res, prices[i] - prices[min]);
            else
                min = i;
        }
        return res;
    }
    public static void main(String[] args) {
        int prices[] = {7, 10, 1, 3, 6, 9, 2};
        System.out.println(day8.maximumProfit(prices));
    }
}
