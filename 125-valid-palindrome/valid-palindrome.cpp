class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
string toLowerStr = "";
for(int i=0;i<n;i++){
toLowerStr.push_back(tolower(s[i]));
}
string validString = "";
for(int i=0;i<n;i++){
    if(isalpha(toLowerStr[i]) || isdigit(toLowerStr[i])){
            validString.push_back(toLowerStr[i]);
        }
    }

   int start=0,prev=validString.size()-1;
   while(start<prev){
       if(validString[start]!=validString[prev]){
           return false;
       }
       start++,prev--;
   } 

   return true;
        
    }
};