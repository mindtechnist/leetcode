#746_使用最小花费爬楼梯

'''
 动态规划  递推公式
首先，到达第n阶台阶有两种方式
 - 1.由n-1阶台阶，前进一步到达 - 花费为前面花费总和加上第n-1阶的花费: sum(n-1)+cur(n-1)
 - 2.由n-2阶台阶，前进两步到达 - 花费为前面花费总和加上第n-2阶的花费: sum(n-2)+cur(n-2)
 所以，第n阶最小花费应取二者较小值
 sum(n) = min(sum(n-1)+cur(n-1), sum(n-2)+cur(n-2))
'''

class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        if len(cost) < 2:
            return min(cost)
        dp = list()
        dp.append(0)
        dp.append(0)
        for i in range(2, len(cost) + 1):
            dp.append(min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]))
        return dp[len(cost)]
		

#优化空间复杂度		
class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
		if len(cost) < 2:
            return min(cost)
        num1 = 0
        num2 = 0
        for i in range(2, len(cost) + 1):
            num3 = min(num2 + cost[i - 1], num1 + cost[i - 2])
            num1 = num2
            num2 = num3
        return num2