class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>indexMap;
        int minsum = INT_MAX;
        vector<string>res;
        for(int i=0;i<list1.size();i++){
            indexMap[list1[i]] = i;
        }

        for (int j=0;j<list2.size();j++){
            if(indexMap.find(list2[j]) != indexMap.end()){
                int sum = indexMap[list2[j]] + j;
                if(sum < minsum){
                    minsum = sum;
                    res = {list2[j]};
                }else if(sum == minsum){
                    res.push_back(list2[j]);
                }
            }
        }
       
       return res;
    }
};