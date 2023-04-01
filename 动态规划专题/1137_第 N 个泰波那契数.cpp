
class Solution {
public:
	int tribonacci(int n) {
		vector<int> tri;
		tri.push_back(0);
		tri.push_back(1);
		tri.push_back(1);
		if (n > 2)
		{
			for (int i = 3; i <= n; i++)
			{
				tri.push_back(tri[i - 1] + tri[i - 2] + tri[i - 3]);
			}
		}
		return tri[n];
	}
};