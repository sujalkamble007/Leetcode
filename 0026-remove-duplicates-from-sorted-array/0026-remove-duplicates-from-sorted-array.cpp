class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //here we keep the track of the unique element 
            //return unique lenght
        //for that count ===> replace the elements for unique palaces 
            //if nums[i] != nums[i-1] then put it into unique place 
        
        int count=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                nums[count++]=nums[i];
            }
        }
        return count;
    }
};