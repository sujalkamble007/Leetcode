class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore voting Algorithmmm
        //States that count ==0 assign majority
       
      
     int n=nums.size();
     int count=0;
    int  majority=0;

    for(int i=0;i<n;i++){
        if(count== 0) majority=nums[i];
 //count++ if nums[i]==mojority
        if(nums[i]==majority) count++;  //count-- if nums[i]!=majority
        else count--;

    }   
    return majority;
    }
};