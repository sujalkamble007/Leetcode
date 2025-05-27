class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       //floyd tortoise  
       int slow=nums[0];
       int fast=nums[0];    
        //mov fast by 2 step and slow by 1 step till slow and fast meet 
       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       }while(slow!=fast);

    //move fast to the start and move both by one step till collide then return slow
       fast=nums[0];
       while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
       }
       return slow;
    }
};