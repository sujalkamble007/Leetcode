class Solution {
    public static int BS(int[] nums, int target, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;

        }
        return -1;
    }

    public int search(int[] nums, int target) {
        return BS(nums, target, 0, nums.length - 1);
    }
}