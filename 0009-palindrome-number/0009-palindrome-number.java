class Solution {
    public boolean isPalindrome(int x) {
        long n =0;
        int original = x;
        if(x < 0) return false;
        while(x > 0){
            int digit = x%10;
            n = (n*10) +digit ;
            x/=10;
        }
        return (n == original);
    }
}