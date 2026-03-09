class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count == 0)majority = nums[i];
            if(nums[i] == majority)count++;
            else count--;
        }
        int count1 = 0;
        for(auto i : nums){
            if(i == majority)count1++;
        }
        if(count1 > n/2)return majority;
        return -1;
    }
};