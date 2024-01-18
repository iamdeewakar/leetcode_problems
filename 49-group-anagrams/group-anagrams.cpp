class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()){
            return{{""}};
        }
        if(strs.size()==1){
            return {{strs[0]}};
        }
        vector<vector<string>>res;
        unordered_map<string,vector<string>>MapStore;
        
        for(auto str:strs){
            string indexString = str;
            sort(indexString.begin(),indexString.end());
            MapStore[indexString].push_back(str);
        }
        for(auto M:MapStore){
            res.push_back(M.second);
        }
        return res;
        
    }
};