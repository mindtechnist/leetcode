#70_爬楼梯

class Solution:
    def climbStairs(self, n: int) -> int:
        f = list()
        f.append(1)
        f.append(1)
        if n < 2:
            return f[n]
        for i in range(2, n + 1):
            f.append(f[i - 1] + f[i - 2])
        return f[n]
		
#优化空间复杂度
class Solution:
    def climbStairs(self, n: int) -> int:
        num1, num2, num3 = 0, 0, 1
        for i in range(n):
            num1 = num2
            num2 = num3
            num3 = num1 + num2
        return num3