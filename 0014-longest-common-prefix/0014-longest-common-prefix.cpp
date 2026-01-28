class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        if(n==0)return "";
        if(n==1) return strs[0];

        int mini = strs[0].size();

        for(int i=0;i<n-1;i++){
            int j = 0;
            int minL = min(strs[i].size() , strs[i+1].size());
            while(j < minL && strs[i][j] == strs[i+1][j])
                j++;
            mini = min(mini , j);
        }
        return strs[0].substr(0,mini);
    }
};