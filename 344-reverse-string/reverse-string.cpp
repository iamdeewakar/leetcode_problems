class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i =0;
        int j = s.size()-1;
       while(i<j){
           char temp;
           temp = s[j];
           s[j] = s[i];
           s[i]=temp;
           i++;
           j--;
       }
        
        
    }
};