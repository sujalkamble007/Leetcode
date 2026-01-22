class Solution {
public:
    bool nonDecreasing(vector<int>& nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;
        while(!nonDecreasing(nums)){
            int n=nums.size();
            int minSum=INT_MAX;
            int index=0;

            for(int i=0;i<n-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<minSum){
                    minSum=sum;
                    index=i;
                }
            }
            nums[index]=nums[index]+nums[index+1];
            nums.erase(nums.begin()+index+1);
            count++;
        }
        return count;
    }
};