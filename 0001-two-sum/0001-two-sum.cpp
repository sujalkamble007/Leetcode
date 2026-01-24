class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , int >mapp;
        for(int i=0 ;i<n;i++){
            int curr = nums[i];
            int next = target - curr;
            if(mapp.find(next) != mapp.end())
                return {mapp[next] , i};

            mapp[curr] = i;
        }
        return {};
    }
};