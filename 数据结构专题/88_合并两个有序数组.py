

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums1[m:] = nums2
        #nums1 = sorted(nums1) #sorted返回的是一个新的列表，题目要求nums1
        nums1.sort() #直接改变nums1的元素顺序