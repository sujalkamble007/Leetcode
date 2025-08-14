class Solution {
public:
//create the map , stack , vector to store
//iterate revervesly for n-1. --> >=0
    //while(!s.empty(). && s.top() < arr[i])
        //s.pop
    //store into mapp[nums2] 
            //if s.empty -> -1 or st.top()
    //s.push(nums2[i])

//iterate thorought nums1 
    //put result into ans -> ans(mapp[nums1])
//return ans
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int >mapp;
        vector<int>ans;
        int n=nums2.size();
        stack<int>st;

        for(int i=n-1 ;i>=0;i--){
            while(!st.empty() && st.top() <=nums2[i]){
                st.pop();
            }
            if(st.empty())mapp[nums2[i]]=-1;
            else mapp[nums2[i]]=st.top();

            st.push(nums2[i]);
        }
        for(auto &i : nums1 ){
            ans.push_back(mapp[i]);
        }

        return ans;
    }
};