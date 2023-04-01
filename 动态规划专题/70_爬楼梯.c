/*70_爬楼梯*/

/*动态规划  f(n)=f(n-1)+f(n-2)*/
int climbStairs(int n) {
	int i = 0;
	int ret[46];
	ret[0] = 1;
	ret[1] = 1;
	if (n > 1)
	{
		for (i = 2; i <= n; i++)
		{
			ret[i] = ret[i - 1] + ret[i - 2];
		}
	}
	return ret[n];
}

/*优化
因为在递推公式中，我们只需要f(n-1),f(n-2)来退出n对应的总类，n-2之前的数据无需保留
所以只用三个数来记录状态即可(滚动)，不需用数组来记录所有值
*/
int climbStairs(int n) {
	int i = 0;
	int num1 = 0, num2 = 0, num3 = 1;
	for (i = 0; i < n; i++)
	{
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}
	return num3;
}