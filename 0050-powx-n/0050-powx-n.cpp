class Solution {
public:
    double Pow(double x,int n){
        //base case
        if(n==0)return 1;
        double temp=Pow(x,n/2);
        temp=temp*temp;

        if(n%2==0 )return temp;
        else return x*temp;

    }
    double myPow(double x, int n) {
        if(n>0)return Pow(x,n);
        else return 1/Pow(x,n);
    }
};