class Solution {
    public List<String> readBinaryWatch(int turnedOn) {

        List<String> result = new ArrayList<>();
        for(int hrs= 0 ; hrs < 12; hrs++){
            int h = Integer.bitCount(hrs);
            for(int min = 0 ; min < 60; min++ ){
                int m = Integer.bitCount(min);
                int total = h + m;
                if(turnedOn == total){
                    result.add(hrs + ":" + String.format("%02d",min));
                }
            }
        }
        return result;
    }
}