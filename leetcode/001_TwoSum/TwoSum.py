class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index_dict = {}
        
        for i, num in enumerate(nums):
            difference = target - num
            
            if difference in index_dict:
                return [index_dict[difference], i]
            
            index_dict[num] = i