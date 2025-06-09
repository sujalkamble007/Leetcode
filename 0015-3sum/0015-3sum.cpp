class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // arr[]= {-2,-2,-2,-1,-1-1,-1,0,0,0,2,2,2}
                    // ans= 3 triplets
        //sort the array
        //iterate thought array keeping tarck of i 
        // j=i+1 AND k=n-1;
        //conditions 
                // 1- for i - if i should not be equal except for first 
                // 2 - sum<0 j++ ;
                //3 - sum>0 k--;
                //else equal =
                                // push it into ans
                                // j++ ,k--;
                                //while j and j-1 are equal j++;
                                //while j and k+1 are equal k--;
        //return ans
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;

        while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0) {
                    j++;

                }else if(sum>0){
                    k--;
                } 
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--; 
                }
            
            }

        }
        return ans;
    }
};