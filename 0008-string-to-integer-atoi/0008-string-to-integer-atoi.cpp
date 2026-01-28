class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if(s.size() == 0)return 0;
        int sign = 1;
        int i=0;
        //leading whitespace
        while(i<n && s[i] == ' '){
            i++;
        }
        //signess
        if(i < n){
            if(s[i] == '-'){
                sign = -1;
                i++;
            }else if(s[i] == '+'){
                i++;
            }
        }

        //conversion
        long long num = 0;
        while(i<n && isdigit(s[i])){
            num = (num*10) + (s[i] - '0');
            
            //Rounding to sizeof Integer
            if(sign == -1 && -num < INT_MIN) return INT_MIN;
            if(sign == 1 && num > INT_MAX) return INT_MAX;

            i++;
        }

        //Return  
        return sign*num;
    }
};