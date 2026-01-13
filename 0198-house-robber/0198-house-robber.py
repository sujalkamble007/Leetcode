class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        dp = [0]*(len(nums)+1)
        dp[1] = nums[0]

        for i in range(2 , len(nums)+1):
            single = dp[i-1]
            double = nums[i-1] + dp[i-2]

            dp[i] = max(single , double)
        
        return dp[n]