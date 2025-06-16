class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Algorithm 
            //initialize l=0 ,r=0, maxi=0;
            //while(r < s.size())
                //if character is present 
                    // and present is within range hash[s[r]] > l 
                            //update the l=hash[s[r]]+1 
                //else 
                    //update by push value into hash 
                        // hash[s[r]] = r;
                            //r++
                    //caCULATING len;

             //return len 

        int n=s.size();
        int l=0;
        int r=0;
        int maxlen=0;

        vector<int>hash(256 ,-1);

        while(r<n){

            if(hash[s[r]] != -1  && hash[s[r]] >= l){
                l=hash[s[r]]+1;
            }

            int len=r-l+1;
            maxlen=max(maxlen , len );
            hash[s[r]] =r ;
            r++;
        }
        return maxlen;

                           
    }
};