class Solution {
public:
    double solve(double x , int n){
        if(n == 0) return 1 ;
        double temp = solve(x , n/2);
        temp = temp* temp ;

        if(n%2 == 0 )return temp;
        return x*temp;
    }
    double myPow(double x, int n) {
        if(n < 0) return 1 / solve( x , n);
        return solve(x , n);
    }
};