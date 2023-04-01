/*动态规划   0ms */
int fib(int n) {
	int ret[31];
	int i = 0;
	ret[0] = 0;
	ret[1] = 1;
	if (n > 1)
	{
		for (i = 2; i < n + 1; i++)
		{
			ret[i] = ret[i - 1] + ret[i - 2];
		}
	}
	return ret[n];
}

/*递归   12ms  */
int fib(int n) {
	if(n < 2)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}