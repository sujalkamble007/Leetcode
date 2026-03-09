class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int>mapp;
        int n = nums.size();
        int target = n/3;
        vector<int>ans;

        for(auto i : nums){
            mapp[i]++;
            if(ans.size() == 0 || ans.back() != i){
                if(mapp[i] > target)ans.push_back(i);
            }
            if(ans.size() == 2 )break;
        }
        return ans;
    }
};