class Solution {
public:
//create the stack 
    // iterate thourgh string 
        //when tackel opening bracket 
            //push into stack
        //else 
            //check for empty stack --> return false
            //store the top and pop the top 
            //check the top with the closing bracket if not --> return false ;

//return st.empty();

    bool isValid(string s) {
        stack<int>st;
        for(auto &i :s){
            if(i=='(' || i=='{' || i=='[' ) st.push(i);
            else{
                if(st.empty()) return false;
                char ch = st.top();
                st.pop();
                if( (i== ')' && ch != '(') ||
                    (i== '}' && ch != '{') ||
                    (i== ']' && ch != '[') )return false;
            }
        }
        return st.empty();
    }
};