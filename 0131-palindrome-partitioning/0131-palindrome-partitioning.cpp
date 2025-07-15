class Solution {
public:
//we are patitioning the string 
    //create the ans and ds to return the ans and storing the elements 
    //call the find function (0 ,s , ans ,ds)
    //return ans

//find(int index , string , ans ,ds )
        //check for  the base case 
            //if index == s.size 
                //ans.push(ds)
        
        //looping  string from index to n 
            //checking the palindrome ( s , index , i)
                //ds.push(s.substr( index , i - index +1))
                //call rexcusrsivly find ( i+1 , s ,ans ,ds)
                //ds.pop()
    
void find(int index , string s , vector<vector<string>>&ans , vector<string>&ds){
    if(index == s.size()){
        ans.push_back(ds);
        return ;
    }

    for(int i=index ;i<s.size() ;i++){
        if(isPalindrome(s , index , i )){
            ds.push_back(s.substr(index , i - index+1));
            find(i+1 ,s, ans , ds);
            ds.pop_back();
        }
    }
} 

bool isPalindrome(string s ,int start ,int end){
    while(start <= end){
        if(s[start++] != s[end--]) return false;
    }
    return true;
}


    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        find( 0 , s , ans , ds);

        return ans;
    }
};