#566_重塑矩阵

#暴力解法，把原矩阵按顺序遍历为一行，挨个取值放入新矩阵  时间复杂度O(mn)
class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if (len(mat) * len(mat[0])) != (r * c):
            return mat
        li = list()
        for row in mat:
            for v in row:
                li.append(v)
        ret = list()
        tmp = list()
        for j in range(r):
            for i in range(c):
                tmp.append(li.pop(0))
            ret.append(tmp)
            tmp = []
        return ret
		

'''
方法二：将原矩阵映射为一行，然后映射为新矩阵，映射关系为
1 2 3										1 2
4 5 6     ---->     1 2 3 4 5 6   ---->     3 4
											5 6
old[0][0]  		=  tmp[0]  =  new[0][0]
old[0][1]  		=  tmp[1]  =  new[0][1]
old[0][3]  		=  tmp[2]  =  new[1][0]
old[x/3][x%3]  	=  tmp[x]  =  new[x/2][x%2]											
old[x/old的列数][x%old的列数]  	=  tmp[x]  =  new[x/new的列数][x%new的列数]	
'''
class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if (len(mat) * len(mat[0])) != (r * c):
            return mat
        ret = [[0 for i in range(c)] for j in range(r)] #构造一个r*c的0矩阵
        for i in range(r * c):
            ret[i//c][i % c] = mat[i//len(mat[0])][i % len(mat[0])]
        return ret
