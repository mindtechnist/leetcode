/* 53.最大子数组和
给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
子数组 是数组中的一个连续部分。
示例 1：
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
*/

/*动态规划 O(n)*/
int maxSubArray(int* nums, int numsSize) {
	int i = 0;
	int maxSum = nums[0];
	int* dp = (int*)malloc(numsSize * sizeof(int));
	*dp = nums[0];
	for (i = 1; i < numsSize; i++)
	{
		int temp = *(dp + i - 1) + nums[i];
		if (temp > nums[i])
		{
			*(dp + i) = temp;
		}
		else
		{
			*(dp + i) = nums[i];
		}
		if (*(dp + i) > maxSum)
		{
			maxSum = *(dp + i);
		}
	}
	free(dp);
	return maxSum;
}

/*贪心策略  时间复杂度 O(n)*/
int maxSubArray(int* nums, int numsSize) {
	int i = 0;
	int maxSum = nums[0];
	int numSum = 0;
	for (i = 0; i < numsSize; i++)
	{
		numSum = numSum + nums[i];
		if (maxSum < numSum)
		{
			maxSum = numSum;
		}
		if (numSum < 0)
		{
			numSum = 0;
		}
	}
	return maxSum;
}

