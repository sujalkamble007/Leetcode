class Solution {
public:
    int binaryGap(int n) {
        string binary ="";
        while(n){
            binary+=(char)(n%2);
            n/=2;
        }
        int s = binary.size();
        int j = -1;
        int maxi = 0;
        for(int i=0;i<s;i++){
            if(binary[i] == 1){
                if(j != -1){
                    maxi = max(maxi , i-j);
                }
                j=i;
            }

        }
        return maxi;
    }
};