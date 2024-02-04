class Solution {
public:
    bool isPalindrome(string s) {
        string strToLower = "";
        int n = s.length();
        for(int i=0;i<n;i++){
            strToLower.push_back(tolower(s[i]));
        }
        string validstring ="";
        for(int i=0;i<n;i++){
            if(isalpha(strToLower[i]) || isdigit(strToLower[i])){
                validstring.push_back(strToLower[i]);
            }
        }
        int start =0 , last = validstring.length()-1;
        while(start < last){
            if(validstring[start]!=validstring[last]){
                return false;
            }
            start++;
            last--;
        }
        return true;
    }
};