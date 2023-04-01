#121_买卖股票的最佳时机

#贪心策略
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_prices = max(prices) #min_prices = float("inf") 
        max_profit = 0
        for pc in prices:
            min_prices = min(min_prices, pc) #记录历史最低价格
            max_profit = max(max_profit, pc - min_prices) #更新最大利润，取历史最大利润和当前最大利润的较大者
        return max_profit


#超时
class Solution:
    def maxProfit(self, prices):
        if len(prices) < 2:
            return 0
        dp = list()
        for i in range(1, len(prices)):
            dp.append(prices[i] - min(prices[:i]))
        if max(dp) < 0:
            return 0
        return max(dp)