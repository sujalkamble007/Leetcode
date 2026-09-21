class Solution {

    public int lowerBound(int[] arr, int target) {

        int low = 0;
        int high = arr.length - 1;
        int ans = arr.length;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }

        }
        return ans;
    }

    public int upperBound(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;
        int ans = arr.length;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }

    public int[] searchRange(int[] nums, int target) {
        int lb = lowerBound(nums, target);

        //COndition nums[lb] != target or lb == nums.length return invalid
        if (lb == nums.length || nums[lb] != target)
            return new int[] { -1, -1 };
        int ub = upperBound(nums, target);

        return new int[] { lb, ub - 1 };
    }
}