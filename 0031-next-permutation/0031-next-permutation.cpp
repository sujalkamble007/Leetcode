class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the break point
        //find slightly greater and swap
        //reverse the remaining ones
        int index=-1;
        int n=nums.size();

         //find the break point
         for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
         }
         if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
         }

     //find slightly greater and swap
     for(int i=n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
     }

    //reverse the remaining ones
    reverse(nums.begin()+index+1,nums.end());

    }
};