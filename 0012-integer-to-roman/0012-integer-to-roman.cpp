class Solution {
public:
    string intToRoman(int num) {
        vector<int>nums ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>val = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string result = "";
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(num == 0)break;

            int times = num/nums[i];
            while(times--){
                result+=val[i];
            }

            num %=nums[i];
        }
        return result;
    }
};