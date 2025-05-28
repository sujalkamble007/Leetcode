class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        //size of matrix
        int n=mat.size();
        int m=mat[0].size();
        
        //initialize low high
        int low =0;
        int high=(n*m)-1;

 //binary search the element
    while(low<=high){
        int mid =low +(high-low)/2;
        //calculate row and column for 2D from 1D
        int row=mid/m;
        int col=mid%m;

        if(mat[row][col]==target){
            return true;
        }else if(mat[row][col]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }

    }
    return false;


    }
};