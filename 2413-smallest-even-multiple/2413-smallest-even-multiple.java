class Solution {
    public int smallestEvenMultiple(int n) {
        int res = n;
        while(n < Integer.MAX_VALUE){
            if(n %2 == 0){
                res = n;
                break;
            }
            n *=2;
        }
        return res;
    }
}