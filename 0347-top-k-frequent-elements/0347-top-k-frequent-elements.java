class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer , Integer>map = new HashMap<>();
        for(int i : nums){
            map.put(i , map.getOrDefault(i , 0) + 1);
        }

        List<Map.Entry<Integer , Integer>> list = new ArrayList<>(map.entrySet());

        list.sort((e1 , e2) -> e2.getValue().compareTo(e1.getValue()));

        int j = 0;
        int[] arr = new int[k];
        for(int i=0;i<k;i++){
            arr[j]= list.get(i).getKey();
            j++;
        }

        return arr;
    }
}