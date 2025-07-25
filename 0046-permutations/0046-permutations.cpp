class Solution {
public:
//create the ans vector to store the elements
//call the premutaion fxn( 0 , ans)

//permutation (index , ans )
    //checking for base case if index == n 
            //push into ans
    //else
        //iterate through nums index==> nums.size()
            //swap (index , i);
            //permutation (index +1 , ans ,nums);
            //swap (index , i) //backtrack
    void permutation(int index , vector<int>& nums , vector<vector<int>>& ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return ;
        }
        else{
            for(int i=index ; i<nums.size();i++){
                swap(nums[index] ,nums[i]);
                permutation(index+1 , nums, ans);
                swap(nums[index] ,nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permutation(0 , nums ,ans);
        return ans;
    }
};