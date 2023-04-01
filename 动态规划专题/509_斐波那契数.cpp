
//动态规划 0ms
class Solution {
public:
	int fib(int n) {
		vector<int> ret;
		ret.push_back(0);
		ret.push_back(1);
		if (n > 1)
		{
			for (int i = 2; i < n + 1; i++)
			{
				ret.push_back(ret[i - 1] + ret[i - 2]);
			}
		}
		return ret[n];
	}
};

//递归  20ms
class Solution {
public:
	int fib(int n) {
		if(n < 2)
        {
            return n;
        }
        return this->fib(n - 1) + this->fib(n - 2);
	}
};