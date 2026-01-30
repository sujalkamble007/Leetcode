class Solution {
public:
    vector<int>computeLps(string &b){
        
        int n = b.size();
        vector<int>lps(n , 0);
        int len =0;
        int i =1;

        while(i<n){
            if(b[i] == b[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if( len != 0){
                    len = lps[len -1];
                }else{
                    i++;
                }
            }
        }
        return lps;
    }
    int KMP(string &a , string &b){
        int n = a.size();
        int m = b.size();

        int index = -1;
        vector<int>lps = computeLps(b);

        int i=0;
        int j=0;

        while(i<n){
            if(a[i] == b[j]){
                i++;
                j++;
            }
            if(j == m){
                 return  i - j ;
                //j = lps[j-1];
            }
            else if( i< n && a[i] != b[j]){
                if( j != 0)
                    j =lps[j-1];
                else 
                    i++;
            }
        }
        return index;
    }
    int repeatedStringMatch(string a, string b) {
        int n = a.size();
        int m = b.size();

        //making of a 
        int lengthToadd = m - 1;
        int j = 0;
        for(int i=0;i<lengthToadd ;i++){
            char ch = a[j];
            a += ch ;
            j = (j+1 ) % n;
        }

        int sp = KMP(a , b);
        int ans = -1 ;
        if(sp != -1){
            int usedLen = sp + m;
            ans = usedLen / n;
            if(usedLen % n)ans+=1;
        }
        return ans;

    }
};