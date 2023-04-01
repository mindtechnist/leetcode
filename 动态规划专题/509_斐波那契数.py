
#动态规划   32ms
class Solution:
    def fib(self, n: int) -> int:
        sum = []
        sum.append(0)
        sum.append(1)
        if n > 1:
            for i in range(2, n + 1):
                sum.append(sum[i - 1] + sum[i - 2])
        return sum[n]
		
		
#递归  700ms
class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        return self.fib(n - 1) + self.fib(n - 2)