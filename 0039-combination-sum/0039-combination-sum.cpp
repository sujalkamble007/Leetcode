class Solution {
public:
//we will solve this question using pick and not pick
    //create the ans & ds 
        //call the find (index , target , candidate , ans ,ds )
        //return ans;

//find(index , target , arr ,ans ,ds)
        //check for base case ==> index == arr.size()
            // target == 0  ==> ans(ds);
        
        //then pick the element condition
            // checking the arr[idx] <=target
                //1.push into ds
                //2.call recursion (index ,target- index ,arr ,ans ,ds)
                //3. remove the element 
            
            //call not pick condition 
                //find(index+1 , target , arr ,ans ,ds)
    void findCombination(int index, int target,vector<int>&arr ,vector<vector<int>>&ans ,vector<int>&ds ){
            if(index == arr.size()){
                if(target == 0){
                    ans.push_back(ds);
                }
                return ;
            }

        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findCombination(index ,target-arr[index],arr, ans ,ds);
            ds.pop_back();
        }

        findCombination(index+1 ,target ,arr ,ans ,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates , ans , ds);
        return ans;
    }
};