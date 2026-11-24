
class Solution {

    public int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public int maxLength(int[] nums) {
        int n = nums.length;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {

            long product = 1;
            long lcm = 1;
            int gcdValue = 0;

            for (int j = i; j < n; j++) {

                product *= nums[j];

                gcdValue = gcd(gcdValue, nums[j]);

                // Update LCM independently
                lcm = (lcm / gcd((int) lcm, nums[j])) * nums[j];

                if (product == lcm * gcdValue) {
                    maxLen = Math.max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
}
