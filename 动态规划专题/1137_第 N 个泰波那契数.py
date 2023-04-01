
#动态规划
class Solution:
    def tribonacci(self, n: int) -> int:
        f = []
        f.append(0)
        f.append(1)
        f.append(1)
        if n > 2:
            for i in range(3, n + 1):
                f.append(f[i - 3] + f[i - 2] + f[i - 1])
        return f[n]