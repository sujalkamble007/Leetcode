class Solution {
//     [1  1   1   0   0   0   1   1   1   1   0]
//                         L
//                                             R

// count   =0->1->2->3->2
// len     = 1->2->3->4->5->3->4->5->6
// maxLen  = 1->2->3->4->5->6

// increment count(i.e number of Zeros) only if encounter zero
// shirnk only count > k
// caluculate maxlen
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int l=0;
        int r=0;
        int maxLen = 0;
        int count = 0;

        while(r < n){
            if(nums[r] == 0){
                count++;
            }

            while(count > k){
                if(nums[l] == 0)count--;
                l++;
            }

            maxLen = Math.max(maxLen , r-l+1);
            r++;
        }
        return maxLen;
    }
}