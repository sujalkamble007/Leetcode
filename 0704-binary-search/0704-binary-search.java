class Solution {

    public static int BS(int[] nums, int target, int low, int high) {
        //base condition 
        if (low > high)
            return -1;

        int mid = low + (high - low) / 2;

        if (target == nums[mid]) {
            return mid;
        } else if (target > nums[mid]) {
            return BS(nums, target, mid + 1, high);
        }

        return BS(nums, target, low, mid - 1);

    }

    public int search(int[] nums, int target) {
        return BS(nums, target, 0, nums.length - 1);
    }
}