class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>mapstore;
     vector<int>result;
     mapstore[nums[0]]=0;
     for(int i =1;i<nums.size();i++){
         int n = target-nums[i];
         if(mapstore.find(n) != mapstore.end()){
             result.push_back(mapstore[n]);
             result.push_back(i);
         }
         mapstore[nums[i]]=i;
     }
     return result;
    }
};