class Solution {

    public int firstOccurance(int[] nums , int target){
        int low = 0;
        int high = nums.length - 1;

        int ans = nums.length ;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == target){
                ans = mid ;
                high = mid - 1;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }

    public int lastOccurance(int[] nums , int target){
        int low = 0;
        int high = nums.length -1 ;
        int ans = nums.length ;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }


    public int[] searchRange(int[] nums, int target) {
        //To solve this question there are two ways
        //1. return [lb , ub -1]
        //2.Apply Binary Serach for first(update adn left) and last(update and go right)

        int first = firstOccurance(nums , target);
        if(first == nums.length ) return new int[]{-1 , -1};

        int last = lastOccurance(nums , target);

        return new int[]{first , last}; 
    }
}