class Solution {
public:
    bool isPlaindrome(int l , int r , string &s){
        if(l>= r)
            return true;
        
        if(s[l] != s[r]) return false;

        return isPlaindrome(l+1 , r-1 , s);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 0;
        //string ans ="";
        int start = 0;
        for(int i=0;i<n;i++){
            for(int j = i ;j<n;j++){
                if(isPlaindrome(i , j , s)){
                    if((j-i + 1) > maxLen){
                        maxLen = j - i + 1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start , maxLen);
    }
};