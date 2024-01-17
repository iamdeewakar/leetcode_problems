class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>setform(nums.begin(),nums.end());
        return !(nums.size()==setform.size());
        
    }
};