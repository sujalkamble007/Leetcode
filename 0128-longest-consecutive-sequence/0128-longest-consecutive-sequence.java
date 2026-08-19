class Solution {
    public int longestConsecutive(int[] nums) {
        int maxi = 1 ;

        if(nums.length <= 0) return 0;

        Set<Integer> set = new TreeSet<>();
        for(int i : nums){
            set.add(i);
        }

        int counter = 1;
        for(Integer i : set){
            if(set.contains(i-1)){
                counter++;
                maxi = Math.max(counter , maxi);
            }else {
                counter = 1;
            }
        }
        return maxi;
    }
}