class Solution {

    public void swap(char[] s , int a , int b){
        char temp = s[a];
        s[a] = s[b];
        s[b] = temp;
    }
    public void reverse(char[] s , int l ,int  r){
        if(l >= r) return ;
        swap(s , l , r);
        reverse(s , l+1 , r-1);

    }
    public void reverseString(char[] s) {
        int n = s.length;
        int l = 0;
        int r = n-1;
        reverse(s , l , r);
    }
}