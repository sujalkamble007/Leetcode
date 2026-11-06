class Solution {

    public int getMin(int[] freq){
        int mini = Integer.MAX_VALUE;
        for(int i=0;i<26;i++){
            if(freq[i] !=0 ){
                mini = Math.min(mini , freq[i]);
            }
        }
        return mini;
    }

    public int getMax(int[] freq){
        int maxi = Integer.MIN_VALUE;
        for(int i=0;i<26;i++){
            maxi = Math.max(maxi , freq[i]);
        }
        return maxi;
    }

    public int beautySum(String s) {
        int n = s.length();

        int sum = 0;
        for(int i=0;i<n;i++){
            int[] freq = new int[26];
            
            for(int j=i;j<n;j++){
                freq[s.charAt(j)-'a']++;
            
            int beauty = getMax(freq) - getMin(freq);
                sum+=beauty;
            }
        }
        return sum;
    }
}