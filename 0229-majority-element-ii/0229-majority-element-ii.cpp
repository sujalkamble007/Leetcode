class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //moore Voting Algorithm finding majority (ele1 ,ele2)
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;

        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=ele2){
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0 && nums[i]!=ele1){
                cnt2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        //counting occurences
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1)count1++;
            if(nums[i]==ele2)count2++;
        }
        //verify condition mini=(n/3)
        vector<int>ans;
        int mini = int(n / 3) + 1;
        if(count1 >= mini)ans.push_back(ele1);
        if(count2 >= mini)ans.push_back(ele2);

        //return result
        return ans;
    }
};