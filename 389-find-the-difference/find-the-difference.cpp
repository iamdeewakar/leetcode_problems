class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0,j=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(s[i]==t[j]){
            i++;
            j++;
        }

        return t[j];
        
    }
};