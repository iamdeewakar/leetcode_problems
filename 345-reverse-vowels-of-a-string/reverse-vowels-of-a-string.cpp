class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        int i=0;int j=s.size()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(isVowel(s[i])){
                j--;
            }else{
                i++;
            }

        }
        
        return s;
    }
    bool isVowel(char c) {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }
};