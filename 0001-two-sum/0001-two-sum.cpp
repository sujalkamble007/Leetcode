class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //better solution 
        // we create a hashmapp looling for the solution a+b=target 
        //algorithms
            //1.create the map<int,int>
        int n=nums.size();
        map<int,int>mapp;    
            //2.iterate thorught array 
        for(int i=0;i<n;i++){
                //calculate curr=nums[i] and next =target- curr
                int curr=nums[i];
                int next=target-curr;
                
                //check the condition
                if(mapp.find(next)!= mapp.end()){
                    //if present return true or reture {mpp[next],i}
                    return {mapp[next],i};
                }
                // push it into mapp
                mapp[curr]=i;
        }     
         return {-1,-1};           
                    //else return false or return {-1,-1}
    
    }
};