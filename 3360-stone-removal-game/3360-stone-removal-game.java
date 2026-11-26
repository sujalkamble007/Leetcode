class Solution {
    public boolean canAliceWin(int n) {
        if(n < 10) return false;

        int i=10;
        boolean bob = false;
        while(n >= i){
            n-=i;
            bob = !bob;
            i--;
        }
        return bob;
    }
}