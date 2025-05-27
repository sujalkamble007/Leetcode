class Solution {
public:
    vector<int>generateRow(int row){
        long long ans=1;
        vector<int >result;
        result.push_back(ans);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans/=i;
            result.push_back(ans);
        }
        return result;
    }
    vector<vector<int>> generate(int n) {
         vector<vector<int>>ans;
         for(int i=1;i<=n;i++){
            ans.push_back(generateRow(i));
         }
         return ans;
    }
};