class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int , int>mapp;
        for(auto &i : nums){
            mapp[i]++;
            if(mapp[i] > n/2)return i;
        }
        return -1;
    }
};