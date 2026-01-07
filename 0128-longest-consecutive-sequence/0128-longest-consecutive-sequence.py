class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashset = set(nums)
        longest = 0 

        for num in hashset:
            if (num - 1 ) not in hashset :
                len =1 
                while (num + len) in hashset:
                    len+=1
            
                longest = max(len , longest)
        
        return longest 
        