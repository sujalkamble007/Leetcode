class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(abs(nums[i]) < abs(mini)){
                mini =nums[i];
            }
            if(abs(nums[i])==abs(mini)){
                mini=max(nums[i],mini);
            }
        }
        
        return mini;
    }
};