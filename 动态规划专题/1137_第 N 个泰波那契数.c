//1137_第 N 个泰波那契数

//动态规划
int tribonacci(int n) {
	int i = 0;
	int f[38] = { 0 };
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	if (n > 2)
	{
		for (i = 3; i < n + 1; i++)
		{
			f[i] = f[i - 3] + f[i - 2] + f[i - 1];
		}
	}
	return f[n];
}