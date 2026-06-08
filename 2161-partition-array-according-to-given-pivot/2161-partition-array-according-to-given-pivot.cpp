class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left,right,equal;
        for(auto i:nums){
            if(i==pivot)equal.push_back(i);
            else{
            (i<pivot)?left.push_back(i):right.push_back(i);
            }
        }
        left.insert(left.end(),equal.begin(),equal.end());
        left.insert(left.end(),right.begin(),right.end());
        return left;
    }
};