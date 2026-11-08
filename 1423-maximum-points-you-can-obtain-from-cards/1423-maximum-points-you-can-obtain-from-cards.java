class Solution {
    public int maxScore(int[] cardScore, int k) {
        int n = cardScore.length ;
        int lSum = 0;
        int rSum = 0;
        int maxSum = 0;
        for(int i=0;i<k;i++){
            lSum += cardScore[i];
        }

        maxSum = lSum;

        int right = n -1 ;
        for(int j = k - 1 ; j>=0;j--){
            lSum-=cardScore[j];
            rSum += cardScore[right];
            maxSum = Math.max(maxSum , lSum + rSum);
            right--;
        }
        return maxSum;
    }
}