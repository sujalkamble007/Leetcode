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
    
void find(int index , vector<int>& arr , vector<vector<int>>&ans ){
    if(index == arr.size()){
        ans.push_back(arr);
        return ;
    }
    else{
    for(int i=index;i<arr.size();i++){
        swap(arr[index] , arr[i]);
        find(index+1 , arr , ans);
        swap(arr[index] , arr[i]);
    }
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        find(0 , nums , ans);
        return ans;
    }
};