class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        //sort the both array 
            //put two points l =>greed factor 
            // r=> children array
        //while one of them is exhauste 
            //check is greed factor can coup up with child green 
                //l++ 
        //else r++;
    //return l;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int l=0,r=0;
        while( l<g.size() && r<s.size()){
            if(g[l] <= s[r]) l++;

            r++;
        }
        return l;
    }
};