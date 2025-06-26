class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //keep track of thr one 
            //if tackled one count++
            //else count=0;
        //maxi = count || maxi
        //return maxi
        int n=nums.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                    count++;
            }else{
                count=0;
            }
            maxi=max(maxi , count);
        }
        return maxi;
    }
};