class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>prefix(n+1 , 0);
        prefix[0] = 0;
        for(int i=0;i<n;i++){
            prefix[i+1] = gain[i] + prefix[i];
        }
        int res = *max_element(prefix.begin(),prefix.end());
        return (res < 0) ? 0 : res;
    }
};