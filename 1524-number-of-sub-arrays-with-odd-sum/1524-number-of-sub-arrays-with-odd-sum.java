class Solution {

//     1     3       5
//     L   
//     1     4       9
//           3       8
//                   5

// prefix = [1     4       9] count = 2 
// suffix = [9     8       5]  count = 2 

// return count*count      


//         [1      2       3       4       5       6       7]  

// prefix = [1     3       6       10      15      21      28] count = 4
// suffix = [28    27      25      22      18      13       7] count = 4 

// this is wrong

// we have to get the 
// An odd-sum subarray is formed by taking the difference between:
// - An even prefix sum.
// - An odd prefix sum.
// Therefore, every even prefix can pair with every odd prefix.
// Answer = EvenCount \times OddCount


// Prefix 1	Prefix 2	Difference
// Even	       Even	        Even
// Odd	            Odd     	Even
// Even	        Odd     	Odd
// Odd         	Even	    Odd


// Prefix:       1    3    6    10    15    21    28
// Parity:       O    O    E     E     O     O     E

    public int numOfSubarrays(int[] arr) {
        long result =0;
        long even = 1;
        long odd =0;

        long mod = 1_000_000_007;

        int prefix = 0;
        for(int i : arr){
            prefix += i;
            if(prefix % 2 == 0) even++;
            else odd++;
        }
        
        result = (even*odd) % mod;

        return (int)result;
    }
}