/*121_买卖股票的最佳时机*/

int maxProfit(int* prices, int pricesSize) {
	int i = 0;
	int min_prices = INT_MAX;
	int max_profit = 0;
	for (i = 0; i < pricesSize; i++)
	{
		min_prices = fmin(min_prices, prices[i]);
		max_profit = fmax(max_profit, prices[i] - min_prices);
	}
	return max_profit;
}