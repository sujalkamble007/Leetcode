class Solution {
public:
    int sumOfDigit(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;

        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int i=0;
        vector<int>sol;
        while(i< nums.size()){
            int a=sumOfDigit(nums[i]);
                sol.push_back(a);
                i++;
        }
        return  *min_element(sol.begin(),sol.end());


    }
};