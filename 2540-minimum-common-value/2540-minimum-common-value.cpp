class Solution {
public:
    int getCommon(vector<int>& num1, vector<int>& num2) {
        int ans=-1;
        int i=0;
        int j=0;
        while(i < num1.size() && j < num2.size()){
            if(num1[i] == num2[j]){
                ans = num1[i];
                break;
            }else if(num1[i] < num2[j]){
                i++;
            }else j++;
        }
        return ans;
    }
};