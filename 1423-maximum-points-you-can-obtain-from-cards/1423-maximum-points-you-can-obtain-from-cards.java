class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int Lsum = 0;
        int Rsum = 0;
        int maxSum = 0;
        for(int i=0;i<k;i++){
            Lsum += cardPoints[i];
        }
        maxSum = Lsum;

        int right = cardPoints.length - 1;
        for(int j = k -1 ; j >=0 ;j--){
            Lsum -= cardPoints[j];
            Rsum += cardPoints[right];
            right--;
            maxSum = Math.max(maxSum , Lsum + Rsum);
        }
        return maxSum;
    }
}