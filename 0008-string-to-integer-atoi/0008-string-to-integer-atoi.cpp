class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        //leading whitespaces
        int i =0;
        while(i<n && s[i]==' '){
            i++;
        }
        //check sign
        int sign = 1;
        if(i<n ){
            if(s[i] == '-'){
                sign = -1 ;
                i++;
            
            }else if(s[i] == '+'){
                    i++;
            }
        }

        //conversion 
        long ans = 0;
        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';
            ans = ans*10 + digit;

            //Round off 
            if(sign == 1 && ans > INT_MAX) return INT_MAX;
            if(sign == -1 && -ans < INT_MIN) return INT_MIN;

            i++;
        }
            
        return sign*ans;
    }
};