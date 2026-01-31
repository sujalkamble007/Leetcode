class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res = letters[0];
        int n = letters.size();
        //sort(letters.begin() , letters.end());
        int low = 0;
        int high = n -1 ;
        while(low <= high){
            int mid = (low + high) / 2;
            if(letters[mid] > target){
                res = letters[mid];
                high = mid - 1;
            }else{
                low = mid + 1;
            }
                
        }
        return res;
    }
};