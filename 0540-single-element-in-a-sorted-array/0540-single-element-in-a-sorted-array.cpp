class Solution {
public:
//we are using the binary search on it with multiple checks to simlipy the problem
    //rules need to remember 
        //1.if seraching adjecent element --> eliminate adjecent side having the same element as mid

    //Check 1 : size == 1. return that 
    //Check 2 : element at index 0 == element at index 1. return arr[0]
    //Check 3 : element at index n-1 == element at index n-2 return arr[n-1]

    //now implement binary search 
        //low =1 
        //high = n-1

    //while  low <= high 
        //calculate mid 
        //check arr[mid] is != to adjecent elements i.e mid+1 , mid-1  --> return arr[mid]
        // check for left half i.e (even , odd)
            // if mid%2 == 0 && arr[mid] == arr[mid+1] OR mid is odd and arr[mid]== arr[mid-1]  --> then  low = mid +1 

        //else right half (odd , even)
            //high=mid-1;

//return -1;
     int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
        if(n==1 )return nums[0];

        if(nums[0] != nums[1])return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low =1;
        int high =n-1;
        
        while(low <= high){
            int mid =(low + high) / 2 ;

            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];

            if((mid %2 == 0  && nums[mid] == nums[mid+1]) || mid%2 == 1  && nums[mid]==nums[mid-1]){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return -1;
    }
};