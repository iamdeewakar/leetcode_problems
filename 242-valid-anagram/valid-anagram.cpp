class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hell;
        unordered_map<char,int>heaven;

        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<t.size();i++){
            hell[t[i]]++;
            heaven[s[i]]++;
        }
        return heaven == hell;
        
    }
};