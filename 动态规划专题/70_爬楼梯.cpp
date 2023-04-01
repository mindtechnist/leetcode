//70_爬楼梯

class Solution {
public:
	int climbStairs(int n) {
		vector<int> ret;
		ret.push_back(1);
		ret.push_back(1);
		if (n > 1)
		{
			for (int i = 2; i <= n; i++)
			{
				ret.push_back(ret[i - 1] + ret[i - 2]);
			}
		}
		return ret[n];
	}
};

//优化
class Solution {
public:
	int climbStairs(int n) {
		int num1 = 0, num2 = 0, num3 = 1;
		for (int i = 0; i < n; i++)
		{
			num1 = num2;
			num2 = num3;
			num3 = num1 + num2;
		}
		return num3;
	}
};