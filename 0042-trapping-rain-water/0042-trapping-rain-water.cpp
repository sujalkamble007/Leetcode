class Solution {
public:
    int trap(vector<int>& arr) {
        //create the r=n-1,l=0;
        //lmax=0 ,rmax=0;
            //iterate through array i.e(while(l<r))
                //if arr[left] < arr[right] 
                    //update left =left+1
                        //  while keeping track of lmax and counting the total 
                            //by if( lmax > arr[l]) total += lmax -arr[i]
                                //else update lmax
                //lese deal with rmax
                    //update right=right--;
                        //while keeping track of total and rmax
                            //if rmax > arr[right] total+=rmax -arr[i];
                                //else update rmax=arr[r]
            //return total

            int n=arr.size();
            int total=0;
            int Lmax=0,Rmax=0;
            int left=0;
            int right=n-1;

            while(left <= right){
                if(arr[left] <= arr[right] ){
                    if(Lmax >= arr[left]){
                        total+=Lmax - arr[left];
                    }else {
                        Lmax = arr[left];
                    }
                    left++;
                }else{
                    if(Rmax >= arr[right]){
                        total+=Rmax -arr[right];
                    }else {
                        Rmax =arr[right];
                    }
                    right--;
                }

            }
            return total;

    }
};