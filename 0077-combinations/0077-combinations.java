class Solution {

    void solve(List<List<Integer>> result, List<Integer> temp, int n, int k, int start) {
        if (k == 0) {
            result.add(new ArrayList<>(temp));
            return;
        }

        if(start > n) return ;

        temp.add(start);
        solve(result, temp, n, k - 1, start + 1);
        temp.remove(temp.size() - 1);

        solve(result, temp, n, k, start + 1);
    }

    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        solve(result, new ArrayList<>(), n, k, 1);
        return result;
    }
}