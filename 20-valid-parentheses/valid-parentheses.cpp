class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.empty()){
            return false;
        }
        if(s[0]==']' || s[0]=='}' || s[0]==')'){
            return false;
        }
        for(int i = 0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(st.empty()){
                return false;
            }
            else if(st.top()=='(' && s[i]==')' || st.top()=='{' && s[i]=='}' || st.top()=='[' && s[i]==']'){
                st.pop();
            }
            
            else{
                return false;
            }
               

        }
        if(st.empty()){
                return true;
            }
        
        return false;
        
    }
};