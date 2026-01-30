class Solution {
public:
    vector<int>computeLps(string &s){
        int n = s.size();
        int len = 0;
        int i=1;

        vector<int>lps(n , 0);

        while(i<n){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len != 0){
                    len = lps[len-1];
                }else{
                    i++;
                }
            }
        }
        return lps;
    }
    string longestPrefix(string s) {
        vector<int>lps = computeLps(s);
        int n= lps.size();
        int len = lps[n-1];
        return s.substr(0,len);

    }
};