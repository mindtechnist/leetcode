class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for key, val in enumerate(nums):
            if target - val in hashmap:
                return [key, hashmap[target - val]]
            hashmap[val] = key