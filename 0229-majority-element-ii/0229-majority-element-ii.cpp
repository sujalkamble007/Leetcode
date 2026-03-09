class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int >mapp;
        int n = nums.size();
        int target = n/3;
        vector<int> ans;
        for(auto i : nums){
            mapp[i]++;
        }

        for(auto i : mapp){
            if(ans.size() == 0 || ans[0] != i.first){
                if(i.second > target){
                    ans.push_back(i.first);
                }
            }
            if(ans.size() == 2 )break;
        }
        return ans;
    }
};