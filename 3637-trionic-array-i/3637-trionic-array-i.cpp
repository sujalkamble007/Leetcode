class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n =nums.size();
        int p =0;
        int q= 0;
        int last = 0;
        int i =1;
        while(i < n && nums[i-1] < nums[i]){
            i++;
        }
        p = i - 1;
        while(i < n && nums[i -1] > nums[i]){
            i++;
        }
        q = i-1;
        while(i<n && nums[i-1] < nums[i]){
            i++;
        }
        last = i-1;

        return (p!=0) && (q!= 0) && (last == n-1 && last != q);
    }
};