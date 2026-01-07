class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int n=s.size();
        int right=n-1;

        while(left < right){
            //check non letter condition
            while(left < right && !isalnum(s[left]))left++;
            while(left < right && !isalnum(s[right]))right--;

            //check for plaindrome
            if(tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;
    }
};