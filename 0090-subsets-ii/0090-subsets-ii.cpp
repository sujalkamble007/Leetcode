class Solution {
public:
    //create ans array 
    //create one vector to store element  ==>ds 
    //sort the nums so that duplicate comes to adjencent
    // func === call recursive function taking (index , nums , ds ,ans )

        //func 
            //put elements of ds into ans
                //for index -> nums.size()
                    // if element is occured before or duplicate ==> cntinue 
                    
                    //else put into ds 
                        //call recursive next index (i+1) ,nums ,ds ,ans
                //after wards pop_back() from ds for next call

    void findSubset(int index ,vector<int>&nums ,vector<int>&ds , vector<vector<int>>& ans){
        ans.push_back(ds);

        for(int i=index;i<nums.size();i++){
            if(i != index && nums[i]== nums[i-1]) continue;

            ds.push_back(nums[i]);
            findSubset(i+1 , nums , ds ,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        findSubset(0,nums,ds,ans);

        return ans;
    }
};