class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //create the unordered_set and put all element in it
        // check while iterating thourght set 
            // if st.find(st[i] -1 == st.end()){
                        //int count=1;
                        // int x = st[i];
                        //check while(st.find(x+1)){
                                //cout++;
                                //x+=1;
                       // }
                       //return longest =max (count ,longest);
            //}
        int n= nums.size();
        int longest=1;
        if(nums.size() == 0) return 0;
       // int count=1;
        unordered_set<int>st;
        for(auto &i : nums){
            st.insert(i);
        }

        for(auto &i : st){
            if(st.find(i-1) == st.end()){
                int count=1;
                int x=i;
                while(st.find(x+1) != st.end()){
                    count++;
                    x=x+1;
                }
                longest=max(longest , count);
            }
        }
        return longest;
    }
};