class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int start = 0;int end = 0;
        while(start < n1 && end < n2){
            if(nums1[start]==nums2[end]){
                return nums1[start];
            }
            else if(nums1[start] < nums2[end]){
                start++;
            }
            else{
                end++;
            }
            
        }

        return -1;
        
    }
};