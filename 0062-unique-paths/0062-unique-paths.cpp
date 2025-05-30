class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res=1;
        //calculating nCr(m+n-2 ,min(n-1,m-1));
        
        //where total no of directions =m+n-2;
        // and __ __ __ min(m-1,n-1) are combination 

        int numerator= m+n-2;
        int denomenator = min(m-1 ,n-1);

        for(int i=1;i<=denomenator;i++){
            res=res*(numerator - i + 1); // calulating numerator
            res=res/i;                  //calculating denomenator
        }
        return (int)res;

    }
};