class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2)
            return 0;

        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for (int i = 0; i <= n - k; i++) {
            int diff = nums[i + k - 1] - nums[i];
            mini = min(mini, diff);
        }
        return mini;
    }
};