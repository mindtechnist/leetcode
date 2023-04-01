''' 53.最大子数组和
给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
子数组 是数组中的一个连续部分。
示例 1：
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
'''

#动态规划
class Solution:
    def maxSubArray(self, nums: List[int]) -> int: #返回值int，参数nums类型为int
        dp = []
        maxFlag = nums[0]
        dp.append(nums[0])
        for i in range(1, len(nums)):
            dp.append(max(dp[i - 1] + nums[i], nums[i]))
            maxFlag = max(maxFlag, dp[i])
        return maxFlag
			
			
#贪心
class Solution:
    def maxSubArray(self, nums: List[int]) -> int: #返回值int，参数nums类型为int
        subSum = 0
        maxSum = nums[0]
        for i in range(len(nums)):
            subSum = subSum + nums[i]
            maxSum = max(maxSum, subSum)
            if subSum < 0:
                subSum = 0
        return maxSum			