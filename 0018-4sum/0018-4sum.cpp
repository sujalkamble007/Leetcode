class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //sort the array 
        //iterate thourght array 
            //1. keeping i = 0-> n  and if(i != 0 && nums[i]==nums[i-1]) continue
            //2. keeping j = i+1 -> n  and if(j!=i+1 && nums[j] == nums[j-1]) continuee
            //3. while keepin them fixx (i and j)

            //4. k=j+1  and l=n-1;
            //5. calculate sum = i+j+k+l 
            //5.while (k<l){
                //sum < target  k++ 
                //sum > target  l--;
                //else 
                    // ans push {i ,j ,k , l};
                    //k++  and l-- 
                    //while( k<l && nums[k]== nums[k-1]) k++; 
                    //while( k<l && numd[l]==nums[l+1]) l--;
            //}
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i >0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1 ;j<n;j++){
                if( j > i+1 && nums[j]==nums[j-1]) continue;

                int k=j+1;
                int l=n-1;

                while(k<l){
                    //goes overflow if we diectly add the sum
    //i.e sum=nums[i]+nums[j]+nums[k]+nums[l];
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];

                    if(sum < target ) {
                        k++;
                    }else if(sum > target ){
                        l--;
                    }else {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while( k<l && nums[k] == nums[k-1]) k++; //increment if same with previous
                        while(k<l && nums[l] == nums[l+1]) l--; //decrement  if same with previous
                    }
                }
            }
        }
        return ans; 
    }
};