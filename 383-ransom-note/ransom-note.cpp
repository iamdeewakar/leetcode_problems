class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        

int count = 0;
        for(int i=0;i<ransomNote.size();i++){
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    count++;
                    magazine.erase(j, 1);
                    break;
                }
            }
        }

        return count == ransomNote.size();

    }
};