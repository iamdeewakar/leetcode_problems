class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>setform(nums.begin(),nums.end());
        if(nums.size()==setform.size()){
            return false;
        }
        else{
            return true;
        }

        
    }
};