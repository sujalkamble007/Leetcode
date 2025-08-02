class Solution {
public:
//we will apply the binary search on it with same changes 
    //low =0 ,high = n-1
    //while low <= high 
        //calculate mid 
            //check mid == target ---> return mid
        //check which half is sorted then serach in that half if not present search in other half
        //checkinf if left half is sorted --> arr[low] <= arr[mid]
                //check target is >= arr[low] && <= arr[mid]. 
                    // update high = mid -1
                //else low =mid+1;
        
        //Now same checking in right half
            //check target  is >= arr[mid] &&  <=arr[high]
                //update low = mid +1
            //else high = mid - 1 

//return -1;
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low =0;
        int high = n-1;

        while(low <= high){
            int mid =(low + high) /2;
            if(nums[mid] == target) return mid;

            //left half sorted or not
            if(nums[low] <= nums[mid]){
                //left half is sorted 
                if(nums[low] <= target && nums[mid] >= target ){
                    high=mid -1 ;
                }else{
                    low =mid+1;
                }

            }else{ 
                //right half is sorted 
                if(nums[mid] <= target && nums[high] >= target){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
            return -1;

    }
};