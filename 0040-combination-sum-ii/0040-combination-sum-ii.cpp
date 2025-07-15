class Solution {
public:

//same the combination 1 
    //create ans and ds to store the answer and elements
    //call find (0 , target , candidate , ans ,ds );
    //return ans;

//in find (index , target , arr , ans ,ds)
    //if target ==0 ans.push(ds);

    //loop from index -> arr.size()
        //check the arr[i] == arr[i-1] then continue
        //check arr[i] > target  ====> break;
    
    //ds.push(arr[i])
    //call find (index+1 , target - arr[i] , arr , ans, ds)
    //ds.pop();

void find(int index ,int target , vector<int>&arr ,vector<vector<int>>&ans , vector<int>& ds){
    if(target == 0) {
        ans.push_back(ds);
        return ;
    }
    for(int i=index ;i<arr.size() ;i++){
        if(i > index && arr[i]== arr[i-1]) continue;
        if(arr[i] > target)break;

        ds.push_back(arr[i]);
        find(i +1 ,target -arr[i] ,arr ,ans , ds);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        find(0,target ,candidates ,ans ,ds);
        return ans;
    }
};