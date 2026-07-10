class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        bin = set()
        for i in range(len(nums)):
            if nums[i] in bin:
                return True
            bin.add(nums[i])
        return False