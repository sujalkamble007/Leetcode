class Solution {

    public void solve(List<String>ans , StringBuilder curr , int n ,int open , int close){
        if(curr.length() == 2*n){
            ans.add(curr.toString());
            return ;
        }

        if(open < n){
                    curr.append('(');
                    solve(ans , curr , n , open + 1, close);
                    curr.deleteCharAt(curr.length() - 1);
        }

        if(close < open){
            curr.append(')');
            solve(ans , curr ,n , open , close+ 1);
            curr.deleteCharAt(curr.length() - 1);
        }

        
    }

    public List<String> generateParenthesis(int n) {
        List<String>ans = new ArrayList<>();
        StringBuilder curr = new StringBuilder();

        int open = 0;
        int close = 0;
        solve(ans , curr , n , open , close);
        return ans;
    }
}