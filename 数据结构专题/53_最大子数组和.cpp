/* 53.最大子数组和
给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
子数组 是数组中的一个连续部分。
示例 1：
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
*/

/*动态规划 O(n)*/
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		vector<int> dp(nums.size());
		int maxSub = nums[0];
		dp[0] = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			dp[i] = max((dp[i - 1]) + nums[i], nums[i]); //子序列和与当前值，取大值
			maxSub = max(maxSub, dp[i]); //更新最大值标记
		}
		return maxSub;
	}
};

/*贪心算法   O(n)*/
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int maxNum = nums[0];
		int subSum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			subSum = subSum + nums[i];
			if (subSum > maxNum)
			{
				maxNum = subSum; //如果累加和大于0就一直累加，并更新最大值
			}
			if (subSum < 0)
			{
				subSum = 0; //一旦累加和变成小于0，就抛弃这个负数，从0开始重新累加，保留原来的最大值
			}
		}
		return maxNum;
	}
};