class Solution {
public:
    //Create the index variable 
        //for keeping the track of next place of non-repeting number
    //iterate thorugh loop and check previous elements 
        //if not equal to its previous element then put it at index 
            //i.e nums[i] != nums[i-1]
                 //do nums[index++] = nums[i]; 
    //return index
    
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};