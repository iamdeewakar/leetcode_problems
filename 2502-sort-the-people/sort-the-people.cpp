class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0;i<names.size();i++){
            for(int j=i+1;j<names.size();j++){
                if(heights[i] < heights[j]){
                    string temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;

                    int temp1 = heights[i];
                    heights[i] = heights[j];
                    heights[j] = temp1;
                }
            }
        }
        
        return names;
    }
};