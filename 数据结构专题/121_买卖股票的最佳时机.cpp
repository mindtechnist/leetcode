//121_买卖股票的最佳时机

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int min_prices = INT_MAX; //历史最小价格初始化为无穷大
		int max_profit = 0; //最大利润初始化为0
		for (vector<int>::iterator it = prices.begin(); it != prices.end(); it++)
		{
			min_prices = min(min_prices, *it);
			max_profit = max(max_profit, *it - min_prices);
		}
		return max_profit;
	}
};