class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();

        int j=-1;
        //find the first occurance of j else return 
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                j=i;
                break;
            }
        }
        //No zero found 
        if(j == -1 )return ;
        //swap the non-zero(i) with zero(j) till end 
            //do j++ only for swaping(non-zero)
        for(int i=j+1;i<n;i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};