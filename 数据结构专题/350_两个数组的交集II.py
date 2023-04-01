#350_两个数组的交集II


#使用哈希记录nums1元素及元素出现的次数，并在nums2中找同时出现的元素存入列表
#时间复杂度   O(m+n)
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        hashmap = {}
        ret = []
        if len(nums1) > len(nums2):
            return self.intersect(nums2, nums1)
        for i in nums1:
            if hashmap.get(i) == None:
                hashmap[i] = 1
            else:
                hashmap[i] += 1
        for i in nums2:
            if hashmap.get(i) != None:
                if hashmap[i] > 0:
                    ret.append(i)
                    hashmap[i] -= 1
        return ret